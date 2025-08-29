-[DeviceAutofillPlacardViewController presentSettingsDialogForAutofillPrefs:]
void __cdecl -[DeviceAutofillPlacardViewController presentSettingsDialogForAutofillPrefs:](
        DeviceAutofillPlacardViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x21
  __int64 v5; // x1
  void *v6; // x20
  id v7; // x20
  _QWORD v8[4]; // [xsp+0h] [xbp-50h] BYREF
  id v9; // [xsp+20h] [xbp-30h]
  DeviceAutofillPlacardViewController *v10; // [xsp+28h] [xbp-28h]

  v4 = objc_retain(a3);
  v6 = (void *)objc_opt_new(&OBJC_CLASS___DeviceAutofillSettingsViewController, v5);
  objc_msgSend(v6, "setAutofillPrefs:", v4);
  objc_release(v4);
  v8[0] = _NSConcreteStackBlock;
  v8[1] = 3254779904LL;
  v8[2] = sub_100062430;
  v8[3] = &unk_1000B8E48;
  v9 = v6;
  v10 = self;
  v7 = objc_retain(v6);
  -[DeviceAutofillPlacardViewController testInSheetViewController:withReply:](
    self,
    "testInSheetViewController:withReply:",
    v7,
    v8);
  objc_release(v9);
  objc_release(v7);
}