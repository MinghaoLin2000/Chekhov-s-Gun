-[SiriNCAlertViewController shouldDismissForNoValidMicrophone]
bool __cdecl -[SiriNCAlertViewController shouldDismissForNoValidMicrophone](SiriNCAlertViewController *self, SEL a2)
{
  SiriNCService *v2; // x19
  unsigned __int8 v3; // w20

  v2 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController service](self, "service"));
  v3 = -[SiriNCService shouldDismissForNoValidMicrophone](v2, "shouldDismissForNoValidMicrophone");
  objc_release(v2);
  return v3;
}