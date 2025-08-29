$s17ControlCenterCore20NavigationControllerC14NavigationModeOwta
void **__fastcall assignWithTake for NavigationController.NavigationMode(void **a1, void **a2)
{
  void *v3; // x0

  v3 = *a1;
  *a1 = *a2;
  objc_release(v3);
  return a1;
}