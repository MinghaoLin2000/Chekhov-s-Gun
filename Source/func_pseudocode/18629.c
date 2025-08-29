$s17ControlCenterCore20NavigationControllerC14NavigationModeOwca
void **__fastcall assignWithCopy for NavigationController.NavigationMode(void **a1, void **a2)
{
  void *v3; // x0
  void *v4; // x20
  id v5; // x0

  v3 = *a2;
  v4 = *a1;
  *a1 = *a2;
  v5 = objc_retain(v3);
  objc_release(v4);
  return a1;
}