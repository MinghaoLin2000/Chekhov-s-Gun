-[DeviceMediaPickerViewController tableView:viewForTableColumn:row:]
id __cdecl -[DeviceMediaPickerViewController tableView:viewForTableColumn:row:](
        DeviceMediaPickerViewController *self,
        SEL a2,
        id a3,
        id a4,
        signed __int64 a5)
{
  id v8; // x22
  void *v9; // x23
  void *v10; // x19
  NSArray *v11; // x21
  id v12; // x20
  void *v13; // x21
  void *v14; // x22
  void *v15; // x21
  void *v16; // x22
  void *v17; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v8 = objc_retain(a3);
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(a4, "identifier"));
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "makeViewWithIdentifier:owner:", v9, self));
  objc_release(v8);
  objc_release(v9);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceMediaPickerViewController mediaPickerNodes](self, "mediaPickerNodes"));
  v12 = objc_retainAutoreleasedReturnValue(-[NSArray objectAtIndexedSubscript:](v11, "objectAtIndexedSubscript:", a5));
  objc_release(v11);
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "name"));
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "textField"));
  objc_msgSend(v14, "setStringValue:", v13);
  objc_release(v14);
  objc_release(v13);
  v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "image"));
  v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "imageView"));
  objc_msgSend(v16, "setImage:", v15);
  objc_release(v16);
  objc_release(v15);
  v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "imageView"));
  objc_msgSend(v17, "setImageAlignment:", 0LL);
  objc_release(v17);
  objc_release(v12);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}