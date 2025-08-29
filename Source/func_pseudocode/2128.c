-[AMPPhotoKitImporter loadMasterImageDictionary]
void __cdecl -[AMPPhotoKitImporter loadMasterImageDictionary](AMPPhotoKitImporter *self, SEL a2)
{
  NSArray *v3; // x19
  void *v4; // x19
  id v5; // x19
  id v6; // x22
  qos_class_t v7; // w0
  dispatch_queue_attr_s *v8; // x20
  NSMutableDictionary *v9; // x23
  void *v10; // x25
  void *i; // x21
  void *v12; // x26
  void *v13; // x23
  void *v14; // x22
  NSArray *v15; // x24
  void *v16; // x23
  void *v17; // x27
  __int64 v18; // x20
  void *j; // x19
  void *v20; // x28
  id v21; // x28
  void *v22; // x28
  bool v23; // zf
  void *v24; // x19
  __int64 v25; // x21
  void *k; // x28
  void *v27; // x24
  NSArray *v28; // x0
  NSArray *v29; // x22
  void *v30; // x25
  __int64 v31; // x26
  void *m; // x20
  void *v33; // x23
  id v34; // x0
  bool v35; // w27
  void *v36; // x20
  void *v37; // x25
  __int64 v38; // x21
  void *n; // x19
  __int64 v40; // x22
  NSMutableDictionary *v41; // x23
  void *v42; // x24
  void *v43; // x23
  void *v44; // x22
  id v45; // x26
  id v46; // x23
  void *v47; // x25
  void *v48; // x27
  __int64 v49; // x21
  void *ii; // x26
  __int64 v51; // x23
  NSMutableDictionary *v52; // x22
  void *v53; // x23
  id v54; // x23
  NSMutableDictionary *v55; // x19
  void *v56; // x21
  void *v57; // x26
  __int64 v58; // x24
  void *jj; // x25
  void *v60; // x28
  AMPPHMediaObject *v61; // x27
  void *v62; // x19
  void *v63; // x19
  id v64; // x0
  bool v65; // w20
  void *v66; // x19
  void *v67; // x22
  void *v68; // x19
  void *v69; // x22
  void *v70; // x19
  void *v71; // x22
  void *v72; // x19
  void *v73; // x22
  void *v74; // x19
  void *v75; // x19
  void *v76; // x19
  void *v77; // x22
  unsigned int v78; // w23
  double v79; // d1
  void *v80; // x19
  void *v81; // x22
  void *v82; // x19
  void *v83; // x19
  id v84; // [xsp+8h] [xbp-808h]
  id v85; // [xsp+10h] [xbp-800h]
  id v86; // [xsp+18h] [xbp-7F8h]
  id v87; // [xsp+20h] [xbp-7F0h]
  PHImageManager *v88; // [xsp+28h] [xbp-7E8h]
  id v89; // [xsp+30h] [xbp-7E0h]
  id v90; // [xsp+38h] [xbp-7D8h]
  dispatch_group_t v91; // [xsp+40h] [xbp-7D0h]
  id v92; // [xsp+48h] [xbp-7C8h]
  id v93; // [xsp+50h] [xbp-7C0h]
  PHFetchResult *v94; // [xsp+58h] [xbp-7B8h]
  id v95; // [xsp+60h] [xbp-7B0h]
  id obj; // [xsp+68h] [xbp-7A8h]
  id v97; // [xsp+70h] [xbp-7A0h]
  id v98; // [xsp+78h] [xbp-798h]
  id v99; // [xsp+78h] [xbp-798h]
  PHImageManager *v100; // [xsp+80h] [xbp-790h]
  id v101; // [xsp+88h] [xbp-788h]
  id v102; // [xsp+90h] [xbp-780h]
  id v103; // [xsp+98h] [xbp-778h]
  id v104; // [xsp+98h] [xbp-778h]
  dispatch_queue_s *queue; // [xsp+A0h] [xbp-770h]
  AMPPhotoKitImporter *v106; // [xsp+A8h] [xbp-768h]
  dispatch_group_t group; // [xsp+B0h] [xbp-760h]
  id v108; // [xsp+B8h] [xbp-758h]
  __int128 v109; // [xsp+C0h] [xbp-750h] BYREF
  __int128 v110; // [xsp+D0h] [xbp-740h]
  __int128 v111; // [xsp+E0h] [xbp-730h]
  __int128 v112; // [xsp+F0h] [xbp-720h]
  _QWORD v113[4]; // [xsp+100h] [xbp-710h] BYREF
  id v114; // [xsp+120h] [xbp-6F0h]
  id v115; // [xsp+128h] [xbp-6E8h]
  id v116; // [xsp+130h] [xbp-6E0h]
  id v117; // [xsp+138h] [xbp-6D8h]
  __int128 v118; // [xsp+140h] [xbp-6D0h] BYREF
  __int128 v119; // [xsp+150h] [xbp-6C0h]
  __int128 v120; // [xsp+160h] [xbp-6B0h]
  __int128 v121; // [xsp+170h] [xbp-6A0h]
  _QWORD v122[4]; // [xsp+188h] [xbp-688h] BYREF
  id v123; // [xsp+1A8h] [xbp-668h]
  id v124; // [xsp+1B0h] [xbp-660h]
  id v125; // [xsp+1B8h] [xbp-658h]
  __int128 v126; // [xsp+1C0h] [xbp-650h] BYREF
  __int128 v127; // [xsp+1D0h] [xbp-640h]
  __int128 v128; // [xsp+1E0h] [xbp-630h]
  __int128 v129; // [xsp+1F0h] [xbp-620h]
  _QWORD v130[4]; // [xsp+208h] [xbp-608h] BYREF
  id v131; // [xsp+228h] [xbp-5E8h]
  void *v132; // [xsp+230h] [xbp-5E0h]
  void *v133; // [xsp+238h] [xbp-5D8h]
  __int128 v134; // [xsp+240h] [xbp-5D0h] BYREF
  __int128 v135; // [xsp+250h] [xbp-5C0h]
  __int128 v136; // [xsp+260h] [xbp-5B0h]
  __int128 v137; // [xsp+270h] [xbp-5A0h]
  __int128 v138; // [xsp+280h] [xbp-590h] BYREF
  __int128 v139; // [xsp+290h] [xbp-580h]
  __int128 v140; // [xsp+2A0h] [xbp-570h]
  __int128 v141; // [xsp+2B0h] [xbp-560h]
  _QWORD block[4]; // [xsp+2C8h] [xbp-548h] BYREF
  id v143; // [xsp+2E8h] [xbp-528h]
  void *v144; // [xsp+2F0h] [xbp-520h]
  id v145; // [xsp+2F8h] [xbp-518h]
  __int128 v146; // [xsp+300h] [xbp-510h] BYREF
  __int128 v147; // [xsp+310h] [xbp-500h]
  __int128 v148; // [xsp+320h] [xbp-4F0h]
  __int128 v149; // [xsp+330h] [xbp-4E0h]
  __int128 v150; // [xsp+340h] [xbp-4D0h] BYREF
  __int128 v151; // [xsp+350h] [xbp-4C0h]
  __int128 v152; // [xsp+360h] [xbp-4B0h]
  __int128 v153; // [xsp+370h] [xbp-4A0h]
  _QWORD v154[4]; // [xsp+388h] [xbp-488h] BYREF
  id v155; // [xsp+3A8h] [xbp-468h]
  id v156; // [xsp+3B0h] [xbp-460h]
  id v157; // [xsp+3B8h] [xbp-458h]
  id v158; // [xsp+3C0h] [xbp-450h]
  id v159; // [xsp+3C8h] [xbp-448h]
  _QWORD v160[5]; // [xsp+3D0h] [xbp-440h] BYREF
  id v161; // [xsp+3F8h] [xbp-418h]
  id v162; // [xsp+400h] [xbp-410h]
  _BYTE v163[128]; // [xsp+408h] [xbp-408h] BYREF
  _BYTE v164[128]; // [xsp+488h] [xbp-388h] BYREF
  _BYTE v165[128]; // [xsp+508h] [xbp-308h] BYREF
  _BYTE v166[128]; // [xsp+588h] [xbp-288h] BYREF
  _BYTE v167[128]; // [xsp+608h] [xbp-208h] BYREF
  _BYTE v168[128]; // [xsp+688h] [xbp-188h] BYREF
  _BYTE v169[128]; // [xsp+708h] [xbp-108h] BYREF
  _QWORD v170[3]; // [xsp+788h] [xbp-88h] BYREF

  v97 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
  v106 = self;
  v93 = objc_retainAutoreleasedReturnValue(-[AMPPhotoKitImporter getFetchOptionsForFetchLimit:](self, "getFetchOptionsForFetchLimit:", 0LL));
  objc_msgSend(v93, "setIncludeAssetSourceTypes:", 3LL);
  v170[0] = PHAssetPropertySetGridMetadata;
  v170[1] = PHAssetPropertySetDescription;
  v170[2] = PHAssetPropertySetOriginalMetadata;
  v3 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v170, 3LL));
  objc_msgSend(v93, "setFetchPropertySets:", v3);
  objc_release(v3);
  v94 = objc_retainAutoreleasedReturnValue(+[PHAsset fetchAssetsWithOptions:](&OBJC_CLASS___PHAsset, "fetchAssetsWithOptions:", v93));
  v89 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
  v90 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
  v4 = objc_msgSend(
         objc_alloc((Class)&OBJC_CLASS___NSMutableDictionary),
         "initWithCapacity:",
         -[PHFetchResult count](v94, "count"));
  -[AMPPhotoKitImporter setAssetUUIDToAssetDictionary:](v106, "setAssetUUIDToAssetDictionary:", v4);
  objc_release(v4);
  v160[0] = _NSConcreteStackBlock;
  v160[1] = 3254779904LL;
  v160[2] = sub_10004A9E4;
  v160[3] = &unk_1000B96B8;
  v160[4] = v106;
  v5 = objc_retain(v90);
  v161 = v5;
  v6 = objc_retain(v89);
  v162 = v6;
  -[PHFetchResult enumerateObjectsUsingBlock:](v94, "enumerateObjectsUsingBlock:", v160);
  v87 = objc_msgSend(
          objc_alloc((Class)&OBJC_CLASS___NSMutableDictionary),
          "initWithCapacity:",
          -[PHFetchResult count](v94, "count"));
  v88 = objc_retainAutoreleasedReturnValue(+[PHImageManager defaultManager](&OBJC_CLASS___PHImageManager, "defaultManager"));
  v98 = v5;
  v7 = qos_class_self();
  v8 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_qos_class(0LL, v7, 0));
  queue = dispatch_queue_create("combining queue", v8);
  objc_release(v8);
  v91 = dispatch_group_create();
  v92 = objc_alloc_init((Class)&OBJC_CLASS___PHImageRequestOptions);
  objc_msgSend(v92, "setDeliveryMode:", 1LL);
  objc_msgSend(v92, "setLoadingMode:", 0x10000LL);
  objc_msgSend(v92, "setNetworkAccessAllowed:", 0LL);
  objc_msgSend(v92, "setVersion:", 0LL);
  objc_msgSend(v92, "setSynchronous:", 0LL);
  objc_msgSend(v92, "setOnlyUseFetchedAssetPropertiesDuringChoosing:", 1LL);
  objc_msgSend(v92, "setResultHandlerQueue:", queue);
  v84 = objc_alloc_init((Class)&OBJC_CLASS___PHVideoRequestOptions);
  objc_msgSend(v84, "setNetworkAccessAllowed:", 0LL);
  objc_msgSend(v84, "setVersion:", 0LL);
  objc_msgSend(v84, "setDeliveryMode:", 1LL);
  objc_msgSend(v84, "setResultHandlerQueue:", queue);
  v9 = objc_retainAutoreleasedReturnValue(-[AMPPhotoKitImporter assetUUIDToAssetDictionary](v106, "assetUUIDToAssetDictionary"));
  v154[0] = _NSConcreteStackBlock;
  v154[1] = 3254779904LL;
  v154[2] = sub_10004AB60;
  v154[3] = &unk_1000B9748;
  group = objc_retain(v91);
  v155 = group;
  v100 = objc_retain(v88);
  v156 = v100;
  v86 = objc_retain(v84);
  v157 = v86;
  v108 = objc_retain(v87);
  v158 = v108;
  v85 = objc_retain(v92);
  v159 = v85;
  -[NSMutableDictionary enumerateKeysAndObjectsUsingBlock:](v9, "enumerateKeysAndObjectsUsingBlock:", v154);
  objc_release(v9);
  dispatch_group_wait(group, 0xFFFFFFFFFFFFFFFFLL);
  v150 = 0u;
  v151 = 0u;
  v152 = 0u;
  v153 = 0u;
  obj = objc_retain(v6);
  v10 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v150, v169, 16LL);
  if ( v10 )
  {
    v103 = *(id *)v151;
    do
    {
      for ( i = 0LL; i != v10; i = (char *)i + 1 )
      {
        if ( *(id *)v151 != v103 )
          objc_enumerationMutation(obj);
        v12 = *(void **)(*((_QWORD *)&v150 + 1) + 8LL * (_QWORD)i);
        v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "uuid"));
        v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v108, "objectForKeyedSubscript:", v13));
        objc_release(v13);
        if ( (sub_10004B028(v14) & 1) == 0 )
        {
          if ( ((unsigned int)objc_msgSend(v12, "hasAdjustments") & 1) != 0 )
          {
            v148 = 0u;
            v149 = 0u;
            v146 = 0u;
            v147 = 0u;
            v15 = objc_retainAutoreleasedReturnValue(
                    +[PHAssetResource assetResourcesForAsset:](
                      &OBJC_CLASS___PHAssetResource,
                      "assetResourcesForAsset:",
                      v12));
            v16 = -[NSArray countByEnumeratingWithState:objects:count:](
                    v15,
                    "countByEnumeratingWithState:objects:count:",
                    &v146,
                    v168,
                    16LL);
            if ( !v16 )
            {
              objc_release(v15);
              v17 = 0LL;
              goto LABEL_28;
            }
            v17 = 0LL;
            v18 = *(_QWORD *)v147;
            while ( 2 )
            {
              for ( j = 0LL; j != v16; j = (char *)j + 1 )
              {
                if ( *(_QWORD *)v147 != v18 )
                  objc_enumerationMutation(v15);
                v20 = *(void **)(*((_QWORD *)&v146 + 1) + 8LL * (_QWORD)j);
                if ( objc_msgSend(v20, "type") == (void *)6 )
                {
                  v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "privateFileURL"));
                  goto LABEL_21;
                }
                if ( objc_msgSend(v20, "type") == (void *)2 )
                {
                  v21 = objc_retain(v20);
                  objc_release(v17);
                  v17 = v21;
                }
              }
              v16 = -[NSArray countByEnumeratingWithState:objects:count:](
                      v15,
                      "countByEnumeratingWithState:objects:count:",
                      &v146,
                      v168,
                      16LL);
              if ( v16 )
                continue;
              break;
            }
            v22 = 0LL;
LABEL_21:
            objc_release(v15);
            if ( v22 )
              v23 = 1;
            else
              v23 = v17 == 0LL;
            if ( !v23 )
            {
              if ( (unsigned int)objc_msgSend(v12, "isHighFrameRateVideo") )
              {
                v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "privateFileURL"));
                goto LABEL_29;
              }
LABEL_28:
              v22 = 0LL;
            }
LABEL_29:
            objc_release(v17);
          }
          else
          {
            v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "mainFileURL"));
          }
          if ( (unsigned int)sub_10004B028(v22) )
          {
            block[0] = _NSConcreteStackBlock;
            block[1] = 3254779904LL;
            block[2] = sub_10004B104;
            block[3] = &unk_1000B9778;
            v143 = objc_retain(v108);
            v144 = v12;
            v145 = objc_retain(v22);
            dispatch_group_async(group, queue, block);
            objc_release(v145);
            objc_release(v143);
          }
          objc_release(v22);
        }
        objc_release(v14);
      }
      v10 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v150, v169, 16LL);
    }
    while ( v10 );
  }
  objc_release(obj);
  v101 = objc_msgSend(
           objc_alloc((Class)&OBJC_CLASS___NSMutableDictionary),
           "initWithCapacity:",
           objc_msgSend(v98, "count"));
  v140 = 0u;
  v141 = 0u;
  v138 = 0u;
  v139 = 0u;
  v95 = objc_retain(v98);
  v24 = objc_msgSend(v95, "countByEnumeratingWithState:objects:count:", &v138, v167, 16LL);
  if ( v24 )
  {
    v25 = *(_QWORD *)v139;
    do
    {
      for ( k = 0LL; k != v24; k = (char *)k + 1 )
      {
        if ( *(_QWORD *)v139 != v25 )
          objc_enumerationMutation(v95);
        v27 = *(void **)(*((_QWORD *)&v138 + 1) + 8LL * (_QWORD)k);
        v28 = objc_retainAutoreleasedReturnValue(
                +[PHAssetResource assetResourcesForAsset:](
                  &OBJC_CLASS___PHAssetResource,
                  "assetResourcesForAsset:",
                  v27));
        v136 = 0u;
        v137 = 0u;
        v134 = 0u;
        v135 = 0u;
        v29 = objc_retain(v28);
        v30 = -[NSArray countByEnumeratingWithState:objects:count:](
                v29,
                "countByEnumeratingWithState:objects:count:",
                &v134,
                v166,
                16LL);
        if ( v30 )
        {
          v31 = *(_QWORD *)v135;
          do
          {
            for ( m = 0LL; m != v30; m = (char *)m + 1 )
            {
              if ( *(_QWORD *)v135 != v31 )
                objc_enumerationMutation(v29);
              v33 = *(void **)(*((_QWORD *)&v134 + 1) + 8LL * (_QWORD)m);
              if ( objc_msgSend(v33, "type") == (void *)10
                || objc_msgSend(v33, "type") == (void *)9
                && ((unsigned int)objc_msgSend(v27, "hasAdjustments") & 1) == 0 )
              {
                v34 = objc_retainAutoreleasedReturnValue(objc_msgSend(v33, "privateFileURL"));
                v35 = v34 == 0LL;
                objc_release(v34);
                if ( !v35 )
                {
                  v130[0] = _NSConcreteStackBlock;
                  v130[1] = 3254779904LL;
                  v130[2] = sub_10004B178;
                  v130[3] = &unk_1000B9778;
                  v131 = objc_retain(v101);
                  v132 = v27;
                  v133 = v33;
                  dispatch_group_async(group, queue, v130);
                  objc_release(v131);
                  goto LABEL_52;
                }
              }
            }
            v30 = -[NSArray countByEnumeratingWithState:objects:count:](
                    v29,
                    "countByEnumeratingWithState:objects:count:",
                    &v134,
                    v166,
                    16LL);
          }
          while ( v30 );
        }
LABEL_52:
        objc_release(v29);
        objc_release(v29);
      }
      v24 = objc_msgSend(v95, "countByEnumeratingWithState:objects:count:", &v138, v167, 16LL);
    }
    while ( v24 );
  }
  objc_release(v95);
  dispatch_group_wait(group, 0xFFFFFFFFFFFFFFFFLL);
  v104 = objc_msgSend(
           objc_alloc((Class)&OBJC_CLASS___NSMutableDictionary),
           "initWithCapacity:",
           objc_msgSend(v108, "count"));
  v128 = 0u;
  v129 = 0u;
  v126 = 0u;
  v127 = 0u;
  v36 = objc_retainAutoreleasedReturnValue(objc_msgSend(v108, "allKeys"));
  v37 = objc_msgSend(v36, "countByEnumeratingWithState:objects:count:", &v126, v165, 16LL);
  if ( v37 )
  {
    v38 = *(_QWORD *)v127;
    do
    {
      for ( n = 0LL; n != v37; n = (char *)n + 1 )
      {
        if ( *(_QWORD *)v127 != v38 )
          objc_enumerationMutation(v36);
        v40 = *(_QWORD *)(*((_QWORD *)&v126 + 1) + 8LL * (_QWORD)n);
        v41 = objc_retainAutoreleasedReturnValue(-[AMPPhotoKitImporter assetUUIDToAssetDictionary](v106, "assetUUIDToAssetDictionary"));
        v42 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v41, "objectForKeyedSubscript:", v40));
        objc_release(v41);
        if ( ((unsigned int)objc_msgSend(v42, "hasAdjustments") & 1) != 0 || (unsigned int)objc_msgSend(v42, "isRAW") )
        {
          v43 = objc_retainAutoreleasedReturnValue(objc_msgSend(v42, "mainFileURL"));
        }
        else
        {
          v44 = objc_retainAutoreleasedReturnValue(objc_msgSend(v42, "uuid"));
          v43 = objc_retainAutoreleasedReturnValue(objc_msgSend(v108, "objectForKeyedSubscript:", v44));
          objc_release(v44);
        }
        v122[0] = _NSConcreteStackBlock;
        v122[1] = 3254779904LL;
        v122[2] = sub_10004B218;
        v122[3] = &unk_1000B9778;
        v123 = objc_retain(v104);
        v124 = v42;
        v125 = v43;
        v45 = objc_retain(v43);
        v46 = objc_retain(v42);
        dispatch_group_async(group, queue, v122);
        objc_release(v125);
        objc_release(v124);
        objc_release(v123);
        objc_release(v45);
        objc_release(v46);
      }
      v37 = objc_msgSend(v36, "countByEnumeratingWithState:objects:count:", &v126, v165, 16LL);
    }
    while ( v37 );
  }
  objc_release(v36);
  dispatch_group_wait(group, 0xFFFFFFFFFFFFFFFFLL);
  v102 = objc_msgSend(
           objc_alloc((Class)&OBJC_CLASS___NSMutableDictionary),
           "initWithCapacity:",
           objc_msgSend(v108, "count"));
  v99 = objc_alloc_init((Class)&OBJC_CLASS___PHImageRequestOptions);
  objc_msgSend(v99, "setDeliveryMode:", 1LL);
  objc_msgSend(v99, "setLoadingMode:", 0x10000LL);
  objc_msgSend(v99, "setNetworkAccessAllowed:", 0LL);
  objc_msgSend(v99, "setVersion:", 0LL);
  objc_msgSend(v99, "setSynchronous:", 0LL);
  objc_msgSend(v99, "setOnlyUseFetchedAssetPropertiesDuringChoosing:", 1LL);
  objc_msgSend(v99, "setResultHandlerQueue:", queue);
  v120 = 0u;
  v121 = 0u;
  v118 = 0u;
  v119 = 0u;
  v47 = objc_retainAutoreleasedReturnValue(objc_msgSend(v108, "allKeys"));
  v48 = objc_msgSend(v47, "countByEnumeratingWithState:objects:count:", &v118, v164, 16LL);
  if ( v48 )
  {
    v49 = *(_QWORD *)v119;
    do
    {
      for ( ii = 0LL; ii != v48; ii = (char *)ii + 1 )
      {
        if ( *(_QWORD *)v119 != v49 )
          objc_enumerationMutation(v47);
        v51 = *(_QWORD *)(*((_QWORD *)&v118 + 1) + 8LL * (_QWORD)ii);
        v52 = objc_retainAutoreleasedReturnValue(-[AMPPhotoKitImporter assetUUIDToAssetDictionary](v106, "assetUUIDToAssetDictionary"));
        v53 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v52, "objectForKeyedSubscript:", v51));
        objc_release(v52);
        dispatch_group_enter(group);
        v113[0] = _NSConcreteStackBlock;
        v113[1] = 3254779904LL;
        v113[2] = sub_10004B28C;
        v113[3] = &unk_1000B9718;
        v114 = objc_retain(v102);
        v54 = objc_retain(v53);
        v115 = v54;
        v116 = objc_retain(v108);
        v117 = objc_retain(group);
        -[PHImageManager requestImageForAsset:targetSize:contentMode:options:resultHandler:](
          v100,
          "requestImageForAsset:targetSize:contentMode:options:resultHandler:",
          v54,
          0LL,
          v99,
          v113,
          360.0,
          360.0);
        objc_release(v117);
        objc_release(v116);
        objc_release(v115);
        objc_release(v114);
        objc_release(v54);
      }
      v48 = objc_msgSend(v47, "countByEnumeratingWithState:objects:count:", &v118, v164, 16LL);
    }
    while ( v48 );
  }
  objc_release(v47);
  dispatch_group_wait(group, 0xFFFFFFFFFFFFFFFFLL);
  v109 = 0u;
  v110 = 0u;
  v111 = 0u;
  v112 = 0u;
  v55 = objc_retainAutoreleasedReturnValue(-[AMPPhotoKitImporter assetUUIDToAssetDictionary](v106, "assetUUIDToAssetDictionary"));
  v56 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary allValues](v55, "allValues"));
  objc_release(v55);
  v57 = objc_msgSend(v56, "countByEnumeratingWithState:objects:count:", &v109, v163, 16LL);
  if ( v57 )
  {
    v58 = *(_QWORD *)v110;
    do
    {
      for ( jj = 0LL; jj != v57; jj = (char *)jj + 1 )
      {
        if ( *(_QWORD *)v110 != v58 )
          objc_enumerationMutation(v56);
        v60 = *(void **)(*((_QWORD *)&v109 + 1) + 8LL * (_QWORD)jj);
        objc_msgSend(v60, "fetchPropertySetsIfNeeded");
        v61 = objc_alloc_init(&OBJC_CLASS___AMPPHMediaObject);
        v62 = objc_retainAutoreleasedReturnValue(objc_msgSend(v60, "uuid"));
        -[AMPPHMediaObject setIdentifier:](v61, "setIdentifier:", v62);
        objc_release(v62);
        v63 = objc_retainAutoreleasedReturnValue(objc_msgSend(v60, "uuid"));
        v64 = objc_retainAutoreleasedReturnValue(objc_msgSend(v108, "objectForKeyedSubscript:", v63));
        v65 = v64 == 0LL;
        objc_release(v64);
        objc_release(v63);
        if ( !v65 )
        {
          v66 = objc_retainAutoreleasedReturnValue(objc_msgSend(v60, "uuid"));
          v67 = objc_retainAutoreleasedReturnValue(objc_msgSend(v108, "objectForKeyedSubscript:", v66));
          -[AMPPHMediaObject setCurrentVersionURL:](v61, "setCurrentVersionURL:", v67);
          objc_release(v67);
          objc_release(v66);
          v68 = objc_retainAutoreleasedReturnValue(objc_msgSend(v60, "uuid"));
          v69 = objc_retainAutoreleasedReturnValue(objc_msgSend(v104, "objectForKeyedSubscript:", v68));
          -[AMPPHMediaObject setOriginalURL:](v61, "setOriginalURL:", v69);
          objc_release(v69);
          objc_release(v68);
          v70 = objc_retainAutoreleasedReturnValue(objc_msgSend(v60, "uuid"));
          v71 = objc_retainAutoreleasedReturnValue(objc_msgSend(v102, "objectForKeyedSubscript:", v70));
          -[AMPPHMediaObject setThumbURL:](v61, "setThumbURL:", v71);
          objc_release(v71);
          objc_release(v70);
          v72 = objc_retainAutoreleasedReturnValue(objc_msgSend(v60, "uuid"));
          v73 = objc_retainAutoreleasedReturnValue(objc_msgSend(v101, "objectForKeyedSubscript:", v72));
          -[AMPPHMediaObject setVideoComplementURL:](v61, "setVideoComplementURL:", v73);
          objc_release(v73);
          objc_release(v72);
        }
        v74 = objc_retainAutoreleasedReturnValue(objc_msgSend(v60, "creationDate"));
        -[AMPPHMediaObject setCreationDate:](v61, "setCreationDate:", v74);
        objc_release(v74);
        v75 = objc_retainAutoreleasedReturnValue(objc_msgSend(v60, "modificationDate"));
        -[AMPPHMediaObject setModificationDate:](v61, "setModificationDate:", v75);
        objc_release(v75);
        -[AMPPHMediaObject setIsFavorite:](v61, "setIsFavorite:", objc_msgSend(v60, "isFavorite"));
        -[AMPPHMediaObject setIsVideo:](v61, "setIsVideo:", objc_msgSend(v60, "isVideo"));
        -[AMPPHMediaObject setIsHighEfficiency:](v61, "setIsHighEfficiency:", objc_msgSend(v60, "isHEIF"));
        if ( -[AMPPHMediaObject isVideo](v61, "isVideo") )
        {
          v76 = objc_retainAutoreleasedReturnValue(objc_msgSend(v60, "photosInfoPanelExtendedProperties"));
          v77 = objc_retainAutoreleasedReturnValue(objc_msgSend(v76, "codec"));
          v78 = (unsigned int)objc_msgSend(v77, "isEqualToString:", CFSTR("hvc1"));
          objc_release(v77);
          objc_release(v76);
          if ( v78 )
            -[AMPPHMediaObject setIsHighEfficiency:](v61, "setIsHighEfficiency:", 1LL);
        }
        objc_msgSend(v60, "locationCoordinate");
        -[AMPPHMediaObject setLatitude:](v61, "setLatitude:");
        objc_msgSend(v60, "locationCoordinate");
        -[AMPPHMediaObject setLongitude:](v61, "setLongitude:", v79);
        v80 = objc_retainAutoreleasedReturnValue(objc_msgSend(v60, "descriptionProperties"));
        v81 = objc_retainAutoreleasedReturnValue(objc_msgSend(v80, "assetDescription"));
        -[AMPPHMediaObject setUserDescription:](v61, "setUserDescription:", v81);
        objc_release(v81);
        objc_release(v80);
        v82 = objc_retainAutoreleasedReturnValue(objc_msgSend(v60, "uuid"));
        objc_msgSend(v97, "setObject:forKey:", v61, v82);
        objc_release(v82);
        objc_release(v61);
      }
      v57 = objc_msgSend(v56, "countByEnumeratingWithState:objects:count:", &v109, v163, 16LL);
    }
    while ( v57 );
  }
  objc_release(v56);
  v83 = objc_msgSend(v97, "copy");
  -[AMPPhotoKitImporter setMasterImageDictionary:](v106, "setMasterImageDictionary:", v83);
  objc_release(v83);
  objc_release(v99);
  objc_release(v102);
  objc_release(v104);
  objc_release(v101);
  objc_release(v159);
  objc_release(v158);
  objc_release(v157);
  objc_release(v156);
  objc_release(v155);
  objc_release(v86);
  objc_release(v85);
  objc_release(group);
  objc_release(queue);
  objc_release(v100);
  objc_release(v108);
  objc_release(v162);
  objc_release(v161);
  objc_release(v95);
  objc_release(obj);
  objc_release(v94);
  objc_release(v93);
  objc_release(v97);
}