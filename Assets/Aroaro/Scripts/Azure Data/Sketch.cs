using UnityEngine;
using Pathfinding.Serialization.JsonFx; //make sure you include this using
using System.Collections;
using System.Collections.Generic;
using UnityEngine.Networking;
using TMPro;

public class Sketch : MonoBehaviour
{
    public GameObject user;
    public List<GameObject> users = new List<GameObject>();
    //string _WebsiteURL = "https://jsonplaceholder.typicode.com/users"; // just some sample data, returns 10 users
    string _WebsiteURL = "https://aroaro.azurewebsites.net/tables/CenotaphForAroaro?zumo-api-version=2.0.0"; // just some sample data, returns 10 users
    public DataItemProto[] dataItems;
    int listLength;
    GameObject lastUser;

    private int i = 0;


    void Awake()
    {
        //Reguest.GET can be called passing in your ODATA url as a string in the form:
        //http://{Your Site Name}.azurewebsites.net/tables/{Your Table Name}?zumo-api-version=2.0.0
        //The response produce is a JSON string
        //old code string jsonResponse = Request.GET(_WebsiteURL);



        WWW myWww = new WWW(_WebsiteURL);
        while (myWww.isDone == false) ;
        string jsonResponse = myWww.text;

        //Just in case something went wrong with the request we check the reponse and exit if there is no response.
        if (string.IsNullOrEmpty(jsonResponse))
        {
            return;
        }

        //We can now deserialize into an array of objects - in this case the class we created. The deserializer is smart enough to instantiate all the classes and populate the variables based on column name.
        dataItems = JsonReader.Deserialize<DataItemProto[]>(jsonResponse);
        Debug.Log("This products name is: " + dataItems[0].Name);

        //We can now loop through the array of objects and access each object individually
        foreach (DataItemProto dataItem in dataItems)
        //foreach (Product product in products)
        {
            //Example of how to use the object
            //Debug.Log("This products name is: " + dataItem.Name);

            //var newUser = (GameObject)Instantiate(user, new Vector3(4, 1, -2), Quaternion.identity);
            //users.Add(newUser);

            //newCube.GetComponent<CubeScript>().SetSize(.45f * (1.0f - perc));
            //newCube.GetComponent<CubeScript>().rotateSpeed = .2f + perc * 4.0f;
            //newCube.transform.Find("New Text").GetComponent<TextMesh>().text = dataItem.Name + " " + dataItem.Size;//"Hullo Again";
            //i++;

            //----------------------
        }
    }

    public void createuser()
    {
        var newuser = (GameObject)Instantiate(user, new Vector3(4, 1, -2), Quaternion.identity);
        users.Add(newuser);
        //newuser.transform.Find("New Text").GetComponent<TextMeshPro>().SetText(dataItems[i % 9].name);
        var nameText = newuser.transform.Find("Name").GetComponentInChildren<TextMeshPro>();
        //var text = dataItems[i % 49].Name;
        //var text = textMesh.GetComponent<TextMeshPro>();
        nameText.SetText(dataItems[i % 49].Name);

        var shapeText = newuser.transform.Find("Shape").GetComponentInChildren<TextMeshPro>();
        shapeText.SetText(dataItems[i % 49].Shape);
        var colourText = newuser.transform.Find("Colour").GetComponentInChildren<TextMeshPro>();
        colourText.SetText(dataItems[i % 49].Colour);
        var sizeText = newuser.transform.Find("Size").GetComponentInChildren<TextMeshPro>();
        sizeText.SetText(dataItems[i % 49].Size.ToString());
        var whenText = newuser.transform.Find("When").GetComponentInChildren<TextMeshPro>();
        whenText.SetText(dataItems[i % 49].When.ToString());
        i++;
    }

    public void removeUser()
    {
        listLength = users.Count;
        lastUser = users[listLength - 1];
        users.Remove(lastUser);
        Destroy(lastUser);
        i--;
    }

}
