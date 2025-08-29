+[MediaPickerNode mediaPickerNodeWithName:distinguishedPlaylistKind:imageNamed:itLibrary:]
id __cdecl +[MediaPickerNode mediaPickerNodeWithName:distinguishedPlaylistKind:imageNamed:itLibrary:](
        id a1,
        SEL a2,
        id a3,
        unsigned __int64 a4,
        id a5,
        id a6)
{
  id v10; // x19
  id v11; // x21
  id v12; // x23
  void *v13; // x20
  NSBundle *v14; // x22
  NSString *v15; // x24
  id v16; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v10 = objc_retain(a6);
  v11 = objc_retain(a5);
  v12 = objc_retain(a3);
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)objc_opt_class(a1), "mediaPickerNode"));
  objc_msgSend(v13, "setDistinguishedPlaylistKind:", a4);
  v14 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v15 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v14,
            "localizedStringForKey:value:table:",
            v12,
            &stru_1000BA220,
            0LL));
  objc_release(v12);
  objc_msgSend(v13, "setName:", v15);
  objc_release(v15);
  objc_release(v14);
  v16 = objc_retainAutoreleasedReturnValue(+[NSImage glyphImageNamed:](&OBJC_CLASS___NSImage, "glyphImageNamed:", v11));
  objc_release(v11);
  objc_msgSend(v13, "setImage:", v16);
  objc_release(v16);
  objc_msgSend(v13, "setItLibrary:", v10);
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v13);
}