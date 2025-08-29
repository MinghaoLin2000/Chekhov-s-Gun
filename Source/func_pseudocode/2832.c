-[DeviceModeTestViewController testLicenseAgreement:]
void __cdecl -[DeviceModeTestViewController testLicenseAgreement:](DeviceModeTestViewController *self, SEL a2, id a3)
{
  void *v4; // x19
  id v5; // x21
  AMPDevicesClient *v6; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary", a3));
  objc_msgSend(v4, "setObject:forKeyedSubscript:", CFSTR("OK"), AMPDeviceReportOKButtonTitleKey);
  objc_msgSend(v4, "setObject:forKeyedSubscript:", CFSTR("Cancel"), AMPDeviceReportCancelButtonTitleKey);
  objc_msgSend(
    v4,
    "setObject:forKeyedSubscript:",
    CFSTR("Music Software License Agreement"),
    AMPDeviceReportWindowTitleKey);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceModeTestViewController testRTFDataForFileBase:](self, "testRTFDataForFileBase:", CFSTR("iOS License")));
  objc_msgSend(v4, "setObject:forKeyedSubscript:", v5, AMPDeviceReportRichTextKey);
  objc_release(v5);
  objc_msgSend(v4, "setObject:forKeyedSubscript:", CFSTR("Please be safe"), AMPDeviceReportSafetyInfoKey);
  objc_msgSend(v4, "setObject:forKeyedSubscript:", CFSTR("Software License.rtf"), AMPDeviceReportDefaultFileNameKey);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  -[AMPDevicesClient showReportWithParameters:withReply:](
    v6,
    "showReportWithParameters:withReply:",
    v4,
    &stru_1000B9F98);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}