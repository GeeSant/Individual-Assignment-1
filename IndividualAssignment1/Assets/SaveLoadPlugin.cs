using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;

public class SaveLoadPlugin : MonoBehaviour
{
    const string DLL_NAME = "SaveLoadPlugin";

    [DllImport(DLL_NAME)]
    private static extern Vector3 loadPosition();

    [DllImport(DLL_NAME)]
    private static extern int SimpleFunction(float x, float y, float z);

    Vector3 newPos;

    float posX;
    float posY;
    float posZ;

    // Update is called once per frame
    void Update()
    {

        //Load
        if (Input.GetKeyDown(KeyCode.L))
        {
            newPos = loadPosition();
            transform.position = newPos;
        }

        //Save
        if (Input.GetKeyDown(KeyCode.P)) 
        {
           posX = transform.position.x;
           posY = transform.position.y;
           posZ = transform.position.z;

            SimpleFunction(posX, posY, posZ);
        }
    }
}