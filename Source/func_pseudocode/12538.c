+[NSURL tsu_privacyContactsURL]
id __cdecl +[NSURL tsu_privacyContactsURL](id a1, SEL a2)
{
  return +[NSURL URLWithString:](
           &OBJC_CLASS___NSURL,
           "URLWithString:",
           CFSTR("x-apple.systempreferences:com.apple.preference.security?Privacy_Contacts"));
}