-[DeviceSettingsBooksViewController loadBookAndPDFModel]
void __cdecl -[DeviceSettingsBooksViewController loadBookAndPDFModel](DeviceSettingsBooksViewController *self, SEL a2)
{
  NSMutableArray *v3; // x20
  NSMutableDictionary *v4; // x21
  NSMutableArray *v5; // x20
  NSMutableDictionary *v6; // x21
  NSMutableDictionary *v7; // x20
  NSMutableDictionary *v8; // x21
  NSMutableDictionary *v9; // x20
  NSMutableDictionary *v10; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  -[DeviceSettingsBooksViewController loadBookAndPDFProperties](self, "loadBookAndPDFProperties");
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsBooksViewController bookNodes](self, "bookNodes"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](self, "dataNodes"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v4, "setObject:forKeyedSubscript:", v3, CFSTR("Books"));
  objc_release(v4);
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsBooksViewController pdfNodes](self, "pdfNodes"));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](self, "dataNodes"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v6, "setObject:forKeyedSubscript:", v5, CFSTR("PDFs"));
  objc_release(v6);
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsBooksViewController bookNodesLookup](self, "bookNodesLookup"));
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodesLookup](self, "dataNodesLookup"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v8, "setObject:forKeyedSubscript:", v7, CFSTR("Books"));
  objc_release(v8);
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsBooksViewController pdfNodesLookup](self, "pdfNodesLookup"));
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodesLookup](self, "dataNodesLookup"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v10, "setObject:forKeyedSubscript:", v9, CFSTR("PDFs"));
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v9);
}