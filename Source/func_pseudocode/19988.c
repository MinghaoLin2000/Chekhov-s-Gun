__Z18liteUpdateJobAttrsPU31objcproto20JobLikeThingProtocol8NSObject
__int64 __fastcall liteUpdateJobAttrs(void *a1)
{
  id v1; // x19
  void *v2; // x21
  unsigned int v3; // w20
  void *v4; // x21
  unsigned int v5; // w20
  void *v6; // x21
  CGPDFDocument *v7; // x20
  void *v8; // x0
  id v9; // x21
  void *v10; // x0
  __int64 v11; // x22
  id v12; // x22
  void *v13; // x0
  id v14; // x23
  os_log_s *v15; // x21
  unsigned int v16; // w20
  unsigned int v17; // w23
  __int64 v18; // x21
  void *v19; // x23
  _BOOL4 v20; // w24
  id v21; // x0
  NSString *v22; // x23
  int v23; // w2
  CGImage *v24; // x26
  size_t v25; // x27
  size_t v26; // x0
  __n128 v27; // q0
  unsigned __int64 v28; // x28
  NSString *v29; // x23
  int v30; // w2
  const __CFNumber *Value; // x0
  int a_low; // w20
  os_log_s *v33; // x21
  unsigned int v34; // w22
  unsigned int v35; // w23
  id v36; // x25
  signed int NumberOfPages; // w27
  id v38; // x26
  void *v39; // x0
  id v40; // x23
  void *v41; // x24
  signed int v42; // w28
  size_t v43; // x24
  os_log_s *v44; // x23
  unsigned int v45; // w24
  unsigned int v46; // w0
  CGPDFPage *Page; // x0
  CGPDFPage *v48; // x27
  double width; // d8
  double height; // d9
  int v51; // w8
  __n128 v52; // q0
  int v53; // w24
  bool v54; // zf
  double v55; // d0
  double v56; // d1
  bool v57; // nf
  double v58; // d2
  double v59; // d8
  double v60; // d9
  CGContext *v61; // x23
  void *v62; // x22
  void *v63; // x24
  void *v64; // x0
  unsigned __int64 v65; // x25
  unsigned __int64 v66; // x24
  unsigned int v67; // w24
  unsigned int v68; // w0
  os_log_s *v69; // x1
  os_log_type_t v70; // w2
  CGImage *Image; // x25
  __CFData *Mutable; // x0
  const __CFData *v73; // x26
  CGImageDestination *v74; // x0
  CGImageDestination *v75; // x27
  os_log_s *v76; // x24
  unsigned int v77; // w25
  unsigned int v78; // w0
  unsigned int v79; // w25
  unsigned int v80; // w0
  unsigned int v81; // w26
  unsigned int v82; // w0
  unsigned int v83; // w27
  unsigned int v84; // w0
  unsigned int v85; // w28
  unsigned int v86; // w0
  const char *v87; // x3
  id v89; // [xsp+0h] [xbp-110h]
  void *context; // [xsp+8h] [xbp-108h]
  CGPDFDocument *document; // [xsp+10h] [xbp-100h]
  CFDictionaryRef theDict; // [xsp+18h] [xbp-F8h] BYREF
  CGAffineTransform password[2]; // [xsp+20h] [xbp-F0h] BYREF
  CGRect BoxRect; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8
  CGRect v95; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8
  CGRect v96; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8
  CGRect v97; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8

  v1 = objc_retain(a1);
  v2 = objc_retainAutoreleasedReturnValue(objc_msgSend(v1, "spoolDocumentFormat"));
  v3 = (unsigned int)objc_msgSend(v2, "caseInsensitiveCompare:", CFSTR("application/pdf"));
  objc_release(v2);
  if ( v3 )
  {
    v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v1, "spoolDocumentFormat"));
    v5 = (unsigned int)objc_msgSend(v4, "caseInsensitiveCompare:", CFSTR("image/urf"));
    objc_release(v4);
    if ( !v5 )
    {
      v18 = 0LL;
      goto LABEL_143;
    }
    document = 0LL;
LABEL_14:
    v12 = objc_retain(v1);
    LODWORD(theDict) = 0;
    if ( (unsigned int)sub_100027A80() )
    {
      v13 = objc_msgSend(v12, "request_attrs");
      v14 = objc_retainAutoreleasedReturnValue((id)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v13 + 672LL))(v13));
      v18 = 0LL;
      if ( v14 )
        objc_msgSend(v14, "compare:", CFSTR("one-sided"));
      objc_msgSend(v12, "setNumberOfSheetsPerCopy:", (unsigned int)theDict);
      objc_release(v14);
    }
    else
    {
      v18 = 1035LL;
    }
    objc_release(v12);
    if ( (int)v18 >= 2 )
    {
      if ( document )
        CGPDFDocumentRelease(document);
      goto LABEL_143;
    }
    context = objc_autoreleasePoolPush();
    v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "spoolDocumentFormat"));
    v20 = (unsigned int)objc_msgSend(v19, "caseInsensitiveCompare:", CFSTR("application/pdf")) == 0;
    objc_release(v19);
    if ( v20 )
    {
      v36 = objc_retain(v12);
      NumberOfPages = CGPDFDocumentGetNumberOfPages(document);
      v38 = objc_retain(v36);
      v39 = objc_msgSend(v38, "request_attrs");
      v40 = objc_retainAutoreleasedReturnValue((id)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v39 + 480LL))(v39));
      if ( objc_msgSend(v40, "count") )
      {
        v41 = objc_retainAutoreleasedReturnValue(objc_msgSend(v40, "firstObject"));
        v42 = (unsigned int)objc_msgSend(v41, "rangeValue");
        objc_release(v41);
        if ( v42 >= NumberOfPages )
          v43 = 0LL;
        else
          v43 = v42 + 1;
      }
      else
      {
        v43 = 1LL;
      }
      objc_release(v40);
      objc_release(v38);
      Page = CGPDFDocumentGetPage(document, v43);
      v48 = Page;
      if ( Page )
      {
        BoxRect = CGPDFPageGetBoxRect(Page, kCGPDFCropBox);
        width = BoxRect.size.width;
        height = BoxRect.size.height;
        v51 = CGPDFPageGetRotationAngle(v48) % 360;
        if ( v51 >= 0 )
          v53 = v51;
        else
          v53 = v51 + 360;
        v54 = v53 == 90 || v53 == 270;
        if ( v54 )
          v55 = width;
        else
          v55 = height;
        if ( v54 )
          v56 = height;
        else
          v56 = width;
        v57 = v55 < v56;
        v58 = v55 / v56 * 108.0;
        v52.n128_f64[0] = v56 / v55 * 108.0;
        if ( v57 )
          v59 = v58;
        else
          v59 = 108.0;
        if ( v57 )
          v60 = 108.0;
        else
          v60 = v52.n128_f64[0];
        v61 = (CGContext *)sub_1000277FC((unsigned __int64)v60, (unsigned __int64)v59, v52);
        if ( v61 )
        {
          v95.origin.x = 0.0;
          v95.origin.y = 0.0;
          v95.size.width = v60;
          v95.size.height = v59;
          CGPDFPageGetDrawingTransform(password, v48, kCGPDFCropBox, v95, v53, 1);
          CGContextConcatCTM(v61, password);
          CGContextDrawPDFPage(v61, v48);
        }
      }
      else
      {
        v61 = 0LL;
      }
      objc_release(v38);
LABEL_98:
      objc_autoreleasePoolPop(context);
      if ( v61 )
      {
        Image = CGBitmapContextCreateImage(v61);
        if ( Image )
        {
          Mutable = CFDataCreateMutable(kCFAllocatorDefault, 0LL);
          v73 = Mutable;
          if ( Mutable )
          {
            v74 = CGImageDestinationCreateWithData(Mutable, CFSTR("public.png"), 1uLL, 0LL);
            v75 = v74;
            if ( v74 )
            {
              CGImageDestinationAddImage(v74, Image, 0LL);
              if ( CGImageDestinationFinalize(v75) )
              {
                if ( (unsigned __int64)(CFDataGetLength(v73) - 1) <= 0x7FFE )
                  objc_msgSend(v12, "updateThumbnail:", v73);
                goto LABEL_133;
              }
              v76 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
              if ( os_log_type_enabled(v76, OS_LOG_TYPE_ERROR) )
              {
                v85 = (unsigned int)objc_msgSend(v12, "printd_job_id");
                if ( v12 )
                  v86 = (unsigned int)objc_msgSend(v12, "destination_job_id");
                else
                  v86 = -1;
                LODWORD(password[0].a) = 67109376;
                HIDWORD(password[0].a) = v85;
                LOWORD(password[0].b) = 1024;
                *(_DWORD *)((char *)&password[0].b + 2) = v86;
                _os_log_impl(
                  (void *)&_mh_execute_header,
                  v76,
                  OS_LOG_TYPE_ERROR,
                  "[Job %d][%d] liteUpdateJobAttrs: Could not create thumbnail.",
                  (uint8_t *)password,
                  0xEu);
              }
LABEL_132:
              objc_release(v76);
LABEL_133:
              if ( document )
                CGPDFDocumentRelease(document);
              if ( v73 )
                CFRelease(v73);
              if ( v75 )
                CFRelease(v75);
              if ( Image )
                CGImageRelease(Image);
              if ( v61 )
                CGContextRelease(v61);
              goto LABEL_143;
            }
            v76 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
            if ( os_log_type_enabled(v76, OS_LOG_TYPE_ERROR) )
            {
              v83 = (unsigned int)objc_msgSend(v12, "printd_job_id");
              if ( v12 )
                v84 = (unsigned int)objc_msgSend(v12, "destination_job_id");
              else
                v84 = -1;
              LODWORD(password[0].a) = 67109376;
              HIDWORD(password[0].a) = v83;
              LOWORD(password[0].b) = 1024;
              *(_DWORD *)((char *)&password[0].b + 2) = v84;
              _os_log_impl(
                (void *)&_mh_execute_header,
                v76,
                OS_LOG_TYPE_ERROR,
                "[Job %d][%d] liteUpdateJobAttrs: Unable to create thumbnail destination.",
                (uint8_t *)password,
                0xEu);
            }
          }
          else
          {
            v76 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
            if ( os_log_type_enabled(v76, OS_LOG_TYPE_ERROR) )
            {
              v81 = (unsigned int)objc_msgSend(v12, "printd_job_id");
              if ( v12 )
                v82 = (unsigned int)objc_msgSend(v12, "destination_job_id");
              else
                v82 = -1;
              LODWORD(password[0].a) = 67109376;
              HIDWORD(password[0].a) = v81;
              LOWORD(password[0].b) = 1024;
              *(_DWORD *)((char *)&password[0].b + 2) = v82;
              _os_log_impl(
                (void *)&_mh_execute_header,
                v76,
                OS_LOG_TYPE_ERROR,
                "[Job %d][%d] liteUpdateJobAttrs: Can't create CFData to hold thumbnail.",
                (uint8_t *)password,
                0xEu);
            }
            v73 = 0LL;
          }
          v75 = 0LL;
          goto LABEL_132;
        }
        v76 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
        if ( os_log_type_enabled(v76, OS_LOG_TYPE_ERROR) )
        {
          v79 = (unsigned int)objc_msgSend(v12, "printd_job_id");
          if ( v12 )
            v80 = (unsigned int)objc_msgSend(v12, "destination_job_id");
          else
            v80 = -1;
          LODWORD(password[0].a) = 67109376;
          HIDWORD(password[0].a) = v79;
          LOWORD(password[0].b) = 1024;
          *(_DWORD *)((char *)&password[0].b + 2) = v80;
          v87 = "[Job %d][%d] liteUpdateJobAttrs: Unable to create thumbnail from bitmap context.";
LABEL_124:
          _os_log_impl((void *)&_mh_execute_header, v76, OS_LOG_TYPE_ERROR, v87, (uint8_t *)password, 0xEu);
        }
      }
      else
      {
        v76 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
        if ( os_log_type_enabled(v76, OS_LOG_TYPE_ERROR) )
        {
          v77 = (unsigned int)objc_msgSend(v12, "printd_job_id");
          if ( v12 )
            v78 = (unsigned int)objc_msgSend(v12, "destination_job_id");
          else
            v78 = -1;
          LODWORD(password[0].a) = 67109376;
          HIDWORD(password[0].a) = v77;
          LOWORD(password[0].b) = 1024;
          *(_DWORD *)((char *)&password[0].b + 2) = v78;
          v87 = "[Job %d][%d] liteUpdateJobAttrs: Unable to create bitmap context.";
          goto LABEL_124;
        }
      }
      v73 = 0LL;
      v75 = 0LL;
      Image = 0LL;
      goto LABEL_132;
    }
    v21 = objc_retain(v12);
    theDict = 0LL;
    v89 = v21;
    v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "spoolDocumentFilename"));
    v24 = (CGImage *)lite_create_image(v22, 1, v23, &theDict);
    objc_release(v22);
    if ( v24 )
    {
      v25 = CGImageGetWidth(v24);
      v26 = CGImageGetHeight(v24);
      v28 = v26;
      if ( v26 < 2 * v25 && 2 * v26 > v25
        || (CGImageRelease(v24),
            v29 = objc_retainAutoreleasedReturnValue(objc_msgSend(v89, "spoolDocumentFilename")),
            v24 = (CGImage *)lite_create_image(v29, 0, v30, &theDict),
            objc_release(v29),
            v24) )
      {
        if ( theDict )
        {
          LODWORD(password[0].a) = 0;
          Value = (const __CFNumber *)CFDictionaryGetValue(theDict, kCGImagePropertyOrientation);
          if ( Value )
          {
            if ( CFNumberGetValue(Value, kCFNumberIntType, password) )
              a_low = LODWORD(password[0].a);
            else
              a_low = 1;
          }
          else
          {
            a_low = 1;
          }
          CFRelease(theDict);
        }
        else
        {
          a_low = 1;
        }
        if ( v28 < v25 )
          v65 = 108 * v28 / v25;
        else
          v65 = 108LL;
        if ( v28 < v25 )
          v66 = 108LL;
        else
          v66 = 108 * v25 / v28;
        v61 = (CGContext *)sub_1000277FC(v66, v65, v27);
        if ( v61 )
        {
          v96.size.width = (double)v66;
          v96.size.height = (double)v65;
          v96.origin.x = 0.0;
          v96.origin.y = 0.0;
          _lite_page_transform((__int64 *)password, v25, v28, v96, a_low, 0, 0);
          CGContextConcatCTM(v61, password);
          v97.size.width = (double)v25;
          v97.size.height = (double)v28;
          v97.origin.x = 0.0;
          v97.origin.y = 0.0;
          CGContextDrawImage(v61, v97, v24);
        }
        CFRelease(v24);
        goto LABEL_97;
      }
      v44 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
      if ( os_log_type_enabled(v44, OS_LOG_TYPE_ERROR) )
      {
        v67 = (unsigned int)objc_msgSend(v89, "printd_job_id");
        if ( v89 )
          v68 = (unsigned int)objc_msgSend(v89, "destination_job_id");
        else
          v68 = -1;
        LODWORD(password[0].a) = 67109376;
        HIDWORD(password[0].a) = v67;
        LOWORD(password[0].b) = 1024;
        *(_DWORD *)((char *)&password[0].b + 2) = v68;
        v69 = v44;
        v70 = OS_LOG_TYPE_ERROR;
LABEL_95:
        _os_log_impl(
          (void *)&_mh_execute_header,
          v69,
          v70,
          "[Job %d][%d] lite_draw_image_bitmap: Unable to open image from job file.",
          (uint8_t *)password,
          0xEu);
      }
    }
    else
    {
      v44 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
      if ( os_log_type_enabled(v44, OS_LOG_TYPE_DEFAULT) )
      {
        v45 = (unsigned int)objc_msgSend(v89, "printd_job_id");
        if ( v89 )
          v46 = (unsigned int)objc_msgSend(v89, "destination_job_id");
        else
          v46 = -1;
        LODWORD(password[0].a) = 67109376;
        HIDWORD(password[0].a) = v45;
        LOWORD(password[0].b) = 1024;
        *(_DWORD *)((char *)&password[0].b + 2) = v46;
        v69 = v44;
        v70 = OS_LOG_TYPE_DEFAULT;
        goto LABEL_95;
      }
    }
    objc_release(v44);
    v61 = 0LL;
LABEL_97:
    objc_release(v89);
    goto LABEL_98;
  }
  v6 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(v1, "spoolDocumentFilename")));
  v7 = (CGPDFDocument *)sub_100022254(objc_msgSend(v6, "UTF8String"));
  objc_release(v6);
  if ( v7 )
  {
    document = v7;
    if ( CGPDFDocumentIsEncrypted(v7) )
    {
      v8 = objc_msgSend(v1, "request_attrs");
      v9 = objc_retainAutoreleasedReturnValue((id)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v8 + 192LL))(v8));
      if ( objc_msgSend(v9, "length") )
      {
        v10 = objc_msgSend(v9, "length");
        if ( (unsigned __int64)v10 >= 0x7F )
          v11 = 127LL;
        else
          v11 = (__int64)v10;
        objc_msgSend(v9, "getBytes:length:", password, v11);
        *((_BYTE *)&password[0].a + v11) = 0;
        CGPDFDocumentUnlockWithPassword(v7, (const char *)password);
      }
      objc_release(v9);
    }
    if ( CGPDFDocumentAllowsPrinting(v7) )
    {
      objc_msgSend(v1, "setPdf_pages:", CGPDFDocumentGetNumberOfPages(v7));
      goto LABEL_14;
    }
    v33 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v33, OS_LOG_TYPE_ERROR) )
    {
      v34 = (unsigned int)objc_msgSend(v1, "printd_job_id");
      if ( v1 )
        v35 = (unsigned int)objc_msgSend(v1, "destination_job_id");
      else
        v35 = -1;
      v63 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(v1, "spoolDocumentFilename")));
      v64 = objc_msgSend(v63, "UTF8String");
      LODWORD(password[0].a) = 67109634;
      HIDWORD(password[0].a) = v34;
      LOWORD(password[0].b) = 1024;
      *(_DWORD *)((char *)&password[0].b + 2) = v35;
      HIWORD(password[0].b) = 2080;
      *(_QWORD *)&password[0].c = v64;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v33,
        OS_LOG_TYPE_ERROR,
        "[Job %d][%d] liteUpdateJobAttrs: PDF permissions do not allow printing of \"%s\".",
        (uint8_t *)password,
        0x18u);
      objc_release(v63);
    }
    objc_release(v33);
    CGPDFDocumentRelease(v7);
    v18 = 1042LL;
  }
  else
  {
    v15 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v15, OS_LOG_TYPE_ERROR) )
    {
      v16 = (unsigned int)objc_msgSend(v1, "printd_job_id");
      if ( v1 )
        v17 = (unsigned int)objc_msgSend(v1, "destination_job_id");
      else
        v17 = -1;
      v62 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(v1, "spoolDocumentFilename")));
      LODWORD(password[0].a) = 67109634;
      HIDWORD(password[0].a) = v16;
      LOWORD(password[0].b) = 1024;
      *(_DWORD *)((char *)&password[0].b + 2) = v17;
      HIWORD(password[0].b) = 2080;
      *(_QWORD *)&password[0].c = objc_msgSend(v62, "UTF8String");
      _os_log_impl(
        (void *)&_mh_execute_header,
        v15,
        OS_LOG_TYPE_ERROR,
        "[Job %d][%d] liteUpdateJobAttrs: Unable to create a CGPDFDocumentRef for \"%s\".",
        (uint8_t *)password,
        0x18u);
      objc_release(v62);
    }
    objc_release(v15);
    v18 = 1041LL;
  }
LABEL_143:
  objc_release(v1);
  return v18;
}