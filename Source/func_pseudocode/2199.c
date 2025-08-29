-[TrackListViewController tableView:viewForTableColumn:row:]
id __cdecl -[TrackListViewController tableView:viewForTableColumn:row:](
        TrackListViewController *self,
        SEL a2,
        id a3,
        id a4,
        signed __int64 a5)
{
  id v8; // x19
  id v9; // x20
  void *v10; // x21
  NSMutableArray *v11; // x24
  void *v12; // x22
  void *v13; // x0
  void *v14; // x23
  __CFString *v15; // x24
  NSNumber *v16; // x25
  __CFString *v17; // x0
  __CFString *v18; // x26
  __CFString *v19; // x0
  const __CFString *v20; // x2
  void *v21; // x0
  void *v22; // x27
  void *v23; // x0
  void *v24; // x0
  void *v25; // x28
  void *v26; // x0
  __CFString *v27; // x0
  const __CFString *v28; // x2
  void *v29; // x0
  void *v31; // x24
  unsigned int v32; // w25
  void *v33; // x24
  unsigned int v34; // w25
  void *v35; // x26
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "identifier"));
  v11 = objc_retainAutoreleasedReturnValue(-[TrackListViewController items](self, "items"));
  v12 = objc_retainAutoreleasedReturnValue(-[NSMutableArray objectAtIndexedSubscript:](v11, "objectAtIndexedSubscript:", a5));
  objc_release(v11);
  if ( (unsigned int)objc_msgSend(v10, "isEqualToString:", CFSTR("title")) )
  {
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "makeViewWithIdentifier:owner:", CFSTR("TitleTextCell"), self));
    v14 = v13;
    if ( !v13 )
      goto LABEL_29;
    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "textField"));
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "title"));
    if ( v16 )
    {
      v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "title"));
LABEL_5:
      v18 = v17;
      v19 = v15;
      v20 = v18;
LABEL_20:
      -[__CFString setStringValue:](v19, "setStringValue:", v20);
      goto LABEL_21;
    }
LABEL_26:
    v28 = &stru_1000BA220;
    v27 = v15;
LABEL_27:
    -[__CFString setStringValue:](v27, "setStringValue:", v28);
    goto LABEL_28;
  }
  if ( (unsigned int)objc_msgSend(v10, "isEqualToString:", CFSTR("artist")) )
  {
    v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "makeViewWithIdentifier:owner:", CFSTR("ArtistTextCell"), self));
    v14 = v21;
    if ( !v21 )
      goto LABEL_29;
    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "textField"));
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "artist"));
    v18 = objc_retainAutoreleasedReturnValue(-[NSNumber name](v16, "name"));
    if ( v18 )
    {
      v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "artist"));
      v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v22, "name"));
LABEL_14:
      v25 = v23;
      -[__CFString setStringValue:](v15, "setStringValue:", v23);
      objc_release(v25);
LABEL_15:
      objc_release(v22);
LABEL_21:
      objc_release(v18);
LABEL_28:
      objc_release(v16);
      objc_release(v15);
      goto LABEL_29;
    }
    goto LABEL_19;
  }
  if ( (unsigned int)objc_msgSend(v10, "isEqualToString:", CFSTR("album")) )
  {
    v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "makeViewWithIdentifier:owner:", CFSTR("AlbumTextCell"), self));
    v14 = v24;
    if ( !v24 )
      goto LABEL_29;
    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "textField"));
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "album"));
    v18 = objc_retainAutoreleasedReturnValue(-[NSNumber title](v16, "title"));
    if ( v18 )
    {
      v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "album"));
      v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v22, "title"));
      goto LABEL_14;
    }
LABEL_19:
    v20 = &stru_1000BA220;
    v19 = v15;
    goto LABEL_20;
  }
  if ( (unsigned int)objc_msgSend(v10, "isEqualToString:", CFSTR("time")) )
  {
    v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "makeViewWithIdentifier:owner:", CFSTR("TimeTextCell"), self));
    v14 = v26;
    if ( !v26 )
      goto LABEL_29;
    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v26, "textField"));
    v16 = (NSNumber *)objc_retainAutoreleasedReturnValue(
                        +[NSString totalTimeStringForTotalTimeInMS:](
                          &OBJC_CLASS___NSString,
                          "totalTimeStringForTotalTimeInMS:",
                          objc_msgSend(v12, "totalTime")));
    v27 = v15;
    v28 = (const __CFString *)v16;
    goto LABEL_27;
  }
  if ( (unsigned int)objc_msgSend(v10, "isEqualToString:", CFSTR("genre")) )
  {
    v29 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "makeViewWithIdentifier:owner:", CFSTR("GenreTextCell"), self));
    v14 = v29;
    if ( !v29 )
      goto LABEL_29;
    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v29, "textField"));
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "genre"));
    if ( v16 )
    {
      v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "genre"));
      goto LABEL_5;
    }
    goto LABEL_26;
  }
  v31 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "identifier"));
  v32 = (unsigned int)objc_msgSend(v31, "isEqualToString:", CFSTR("size"));
  objc_release(v31);
  if ( v32 )
  {
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "makeViewWithIdentifier:owner:", CFSTR("SizeTextCell"), self));
    if ( v14 )
    {
      v15 = (__CFString *)objc_alloc_init((Class)&OBJC_CLASS___NSByteCountFormatter);
      -[__CFString setZeroPadsFractionDigits:](v15, "setZeroPadsFractionDigits:", 1LL);
      -[__CFString setAllowedUnits:](v15, "setAllowedUnits:", 30LL);
      -[__CFString setCountStyle:](v15, "setCountStyle:", 0LL);
      v16 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInteger:](&OBJC_CLASS___NSNumber, "numberWithInteger:", objc_msgSend(v12, "size")));
      v18 = objc_retainAutoreleasedReturnValue(-[__CFString stringForObjectValue:](v15, "stringForObjectValue:", v16));
      v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "textField"));
      objc_msgSend(v22, "setStringValue:", v18);
      goto LABEL_15;
    }
  }
  else
  {
    v33 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "identifier"));
    v34 = (unsigned int)objc_msgSend(v33, "isEqualToString:", CFSTR("lastPlayed"));
    objc_release(v33);
    if ( v34 )
    {
      v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "makeViewWithIdentifier:owner:", CFSTR("LastPlayedTextCell"), self));
      v15 = (__CFString *)objc_alloc_init((Class)&OBJC_CLASS___NSDateFormatter);
      -[__CFString setFormatterBehavior:](v15, "setFormatterBehavior:", 1040LL);
      -[__CFString setTimeStyle:](v15, "setTimeStyle:", 1LL);
      -[__CFString setDateStyle:](v15, "setDateStyle:", 1LL);
      -[__CFString setDoesRelativeDateFormatting:](v15, "setDoesRelativeDateFormatting:", 1LL);
      v35 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "lastPlayedDate"));
      v16 = objc_retainAutoreleasedReturnValue(-[__CFString stringFromDate:](v15, "stringFromDate:", v35));
      objc_release(v35);
      v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "textField"));
      v18 = v19;
      if ( v16 )
        v20 = (const __CFString *)v16;
      else
        v20 = &stru_1000BA220;
      goto LABEL_20;
    }
    v14 = 0LL;
  }
LABEL_29:
  objc_release(v12);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v14);
}