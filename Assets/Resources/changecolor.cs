using UnityEngine;

public class changecolor : MonoBehaviour
{
private Renderer cubeRenderer;

    void Awake()
    {
        cubeRenderer = GetComponent<Renderer>();
    }

    // Must be 'public' so the UI Button OnClick menu can see it
    public void ChangeToRandomColor()
    {
        if (cubeRenderer != null)
        {
            cubeRenderer.material.color = Random.ColorHSV(0f, 1f, 0.8f, 1f, 0.8f, 1f);
        }
    }
}
