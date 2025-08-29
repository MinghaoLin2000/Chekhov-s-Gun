-[IPXLibraryChooserService start]
void __cdecl -[IPXLibraryChooserService start](IPXLibraryChooserService *self, SEL a2)
{
  NSExpression *v2; // x21
  NSExpression *v3; // x22
  NSExpression *v4; // x22
  NSExpression *v5; // x23
  NSExpression *v6; // x23
  NSExpression *v7; // x24
  NSComparisonPredicate *v8; // x22
  NSExpression *v9; // x24
  NSExpression *v10; // x27
  NSComparisonPredicate *v11; // x23
  NSExpression *v12; // x27
  NSExpression *v13; // x28
  NSComparisonPredicate *v14; // x24
  NSExpression *v15; // x28
  NSExpression *v16; // x19
  NSComparisonPredicate *v17; // x25
  NSExpression *v18; // x27
  NSExpression *v19; // x28
  NSComparisonPredicate *v20; // x26
  NSArray *v21; // x28
  NSCompoundPredicate *v22; // x27
  NSComparisonPredicate *v23; // [xsp+40h] [xbp-C0h]
  NSComparisonPredicate *v24; // [xsp+48h] [xbp-B8h]
  _QWORD block[6]; // [xsp+58h] [xbp-A8h] BYREF
  __int64 v27; // [xsp+88h] [xbp-78h] BYREF
  __int64 *v28; // [xsp+90h] [xbp-70h]
  __int64 v29; // [xsp+98h] [xbp-68h]
  char v30; // [xsp+A0h] [xbp-60h]

  v2 = objc_retainAutoreleasedReturnValue(+[NSExpression expressionForKeyPath:](&OBJC_CLASS___NSExpression, "expressionForKeyPath:", kMDItemKind));
  v3 = objc_retainAutoreleasedReturnValue(
         +[NSExpression expressionForConstantValue:](
           &OBJC_CLASS___NSExpression,
           "expressionForConstantValue:",
           CFSTR("iPhoto Library")));
  v24 = objc_retainAutoreleasedReturnValue(
          +[NSComparisonPredicate predicateWithLeftExpression:rightExpression:modifier:type:options:](
            &OBJC_CLASS___NSComparisonPredicate,
            "predicateWithLeftExpression:rightExpression:modifier:type:options:",
            v2,
            v3,
            0LL,
            7LL,
            3LL));
  objc_release(v3);
  objc_release(v2);
  v4 = objc_retainAutoreleasedReturnValue(+[NSExpression expressionForKeyPath:](&OBJC_CLASS___NSExpression, "expressionForKeyPath:", kMDItemKind));
  v5 = objc_retainAutoreleasedReturnValue(
         +[NSExpression expressionForConstantValue:](
           &OBJC_CLASS___NSExpression,
           "expressionForConstantValue:",
           CFSTR("Photo Library")));
  v23 = objc_retainAutoreleasedReturnValue(
          +[NSComparisonPredicate predicateWithLeftExpression:rightExpression:modifier:type:options:](
            &OBJC_CLASS___NSComparisonPredicate,
            "predicateWithLeftExpression:rightExpression:modifier:type:options:",
            v4,
            v5,
            0LL,
            7LL,
            3LL));
  objc_release(v5);
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(+[NSExpression expressionForKeyPath:](&OBJC_CLASS___NSExpression, "expressionForKeyPath:", kMDItemKind));
  v7 = objc_retainAutoreleasedReturnValue(
         +[NSExpression expressionForConstantValue:](
           &OBJC_CLASS___NSExpression,
           "expressionForConstantValue:",
           CFSTR("Photos Library")));
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSComparisonPredicate predicateWithLeftExpression:rightExpression:modifier:type:options:](
           &OBJC_CLASS___NSComparisonPredicate,
           "predicateWithLeftExpression:rightExpression:modifier:type:options:",
           v6,
           v7,
           0LL,
           7LL,
           3LL));
  objc_release(v7);
  objc_release(v6);
  v9 = objc_retainAutoreleasedReturnValue(+[NSExpression expressionForKeyPath:](&OBJC_CLASS___NSExpression, "expressionForKeyPath:", kMDItemContentType));
  v10 = objc_retainAutoreleasedReturnValue(
          +[NSExpression expressionForConstantValue:](
            &OBJC_CLASS___NSExpression,
            "expressionForConstantValue:",
            CFSTR("com.apple.photo.library")));
  v11 = objc_retainAutoreleasedReturnValue(
          +[NSComparisonPredicate predicateWithLeftExpression:rightExpression:modifier:type:options:](
            &OBJC_CLASS___NSComparisonPredicate,
            "predicateWithLeftExpression:rightExpression:modifier:type:options:",
            v9,
            v10,
            0LL,
            7LL,
            3LL));
  objc_release(v10);
  objc_release(v9);
  v12 = objc_retainAutoreleasedReturnValue(+[NSExpression expressionForKeyPath:](&OBJC_CLASS___NSExpression, "expressionForKeyPath:", kMDItemContentType));
  v13 = objc_retainAutoreleasedReturnValue(
          +[NSExpression expressionForConstantValue:](
            &OBJC_CLASS___NSExpression,
            "expressionForConstantValue:",
            CFSTR("com.apple.photos.library")));
  v14 = objc_retainAutoreleasedReturnValue(
          +[NSComparisonPredicate predicateWithLeftExpression:rightExpression:modifier:type:options:](
            &OBJC_CLASS___NSComparisonPredicate,
            "predicateWithLeftExpression:rightExpression:modifier:type:options:",
            v12,
            v13,
            0LL,
            7LL,
            3LL));
  objc_release(v13);
  objc_release(v12);
  v15 = objc_retainAutoreleasedReturnValue(+[NSExpression expressionForKeyPath:](&OBJC_CLASS___NSExpression, "expressionForKeyPath:", kMDItemKind));
  v16 = objc_retainAutoreleasedReturnValue(
          +[NSExpression expressionForConstantValue:](
            &OBJC_CLASS___NSExpression,
            "expressionForConstantValue:",
            CFSTR("Aperture Library")));
  v17 = objc_retainAutoreleasedReturnValue(
          +[NSComparisonPredicate predicateWithLeftExpression:rightExpression:modifier:type:options:](
            &OBJC_CLASS___NSComparisonPredicate,
            "predicateWithLeftExpression:rightExpression:modifier:type:options:",
            v15,
            v16,
            0LL,
            7LL,
            3LL));
  objc_release(v16);
  objc_release(v15);
  v18 = objc_retainAutoreleasedReturnValue(+[NSExpression expressionForKeyPath:](&OBJC_CLASS___NSExpression, "expressionForKeyPath:", kMDItemContentType));
  v19 = objc_retainAutoreleasedReturnValue(
          +[NSExpression expressionForConstantValue:](
            &OBJC_CLASS___NSExpression,
            "expressionForConstantValue:",
            CFSTR("com.apple.Aperture.library")));
  v20 = objc_retainAutoreleasedReturnValue(
          +[NSComparisonPredicate predicateWithLeftExpression:rightExpression:modifier:type:options:](
            &OBJC_CLASS___NSComparisonPredicate,
            "predicateWithLeftExpression:rightExpression:modifier:type:options:",
            v18,
            v19,
            0LL,
            7LL,
            3LL));
  objc_release(v19);
  objc_release(v18);
  v21 = objc_retainAutoreleasedReturnValue(
          +[NSArray arrayWithObjects:](
            &OBJC_CLASS___NSArray,
            "arrayWithObjects:",
            v8,
            v14,
            v24,
            v23,
            v11,
            v17,
            v20,
            0LL));
  v22 = objc_retainAutoreleasedReturnValue(
          +[NSCompoundPredicate orPredicateWithSubpredicates:](
            &OBJC_CLASS___NSCompoundPredicate,
            "orPredicateWithSubpredicates:",
            v21));
  objc_release(v21);
  -[NSMetadataQuery setPredicate:](self->_query, "setPredicate:", v22);
  v27 = 0LL;
  v28 = &v27;
  v29 = 0x2020000000LL;
  v30 = 0;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_100002754;
  block[3] = &unk_1000041E0;
  block[4] = self;
  block[5] = &v27;
  dispatch_sync(&_dispatch_main_q, block);
  if ( !*((_BYTE *)v28 + 24) )
    NSLog(&CFSTR("Failed to start query!\n").isa);
  _Block_object_dispose(&v27, 8);
  objc_release(v22);
  objc_release(v20);
  objc_release(v17);
  objc_release(v14);
  objc_release(v11);
  objc_release(v8);
  objc_release(v23);
  objc_release(v24);
}