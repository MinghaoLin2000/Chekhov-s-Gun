+[DeviceSettingsViewController classForViewControllerWithIdentifier:]
Class __cdecl +[DeviceSettingsViewController classForViewControllerWithIdentifier:](id a1, SEL a2, id a3)
{
  NSString *v3; // x19
  objc_class *v4; // x20

  v3 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("DeviceSettings%@ViewController"),
           a3));
  v4 = objc_retainAutoreleaseReturnValue(NSClassFromString(v3));
  objc_release(v3);
  return v4;
}