+[LSRUtilities recognizedResultFromEARPackage:]
id __cdecl +[LSRUtilities recognizedResultFromEARPackage:](id a1, SEL a2, id a3)
{
  void *v3; // x21
  id v4; // x22
  id v5; // x23
  void *v6; // x0
  void *v7; // x21
  __int64 v8; // x28
  void *i; // x20
  __int64 v10; // x24
  void *v11; // x25
  id v12; // x26
  void *v13; // x27
  void *v14; // x26
  void *v15; // x24
  id v16; // x21
  void *v17; // x21
  void *v18; // x23
  void *v19; // x24
  id v20; // x22
  void *v21; // x23
  void *v22; // x24
  void *v23; // x25
  void *v24; // x26
  void *v25; // x27
  id v26; // x28
  void *v27; // x27
  void *v28; // x26
  id v30; // [xsp+0h] [xbp-130h]
  id v31; // [xsp+0h] [xbp-130h]
  id v32; // [xsp+8h] [xbp-128h]
  __int128 v33; // [xsp+10h] [xbp-120h] BYREF
  __int128 v34; // [xsp+20h] [xbp-110h]
  __int128 v35; // [xsp+30h] [xbp-100h]
  __int128 v36; // [xsp+40h] [xbp-F0h]
  _BYTE v37[128]; // [xsp+50h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+138h] [xbp+8h]

  v32 = objc_retain(a3);
  v30 = objc_retainAutoreleasedReturnValue(objc_msgSend(v32, "audioAnalytics"));
  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(v30, "acousticFeatures"));
  v4 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
  v33 = 0u;
  v34 = 0u;
  v35 = 0u;
  v36 = 0u;
  v5 = objc_retain(v3);
  v6 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v33, v37, 16LL);
  if ( v6 )
  {
    v7 = v6;
    v8 = *(_QWORD *)v34;
    do
    {
      for ( i = 0LL; i != v7; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v34 != v8 )
          objc_enumerationMutation(v5);
        v10 = *(_QWORD *)(*((_QWORD *)&v33 + 1) + 8LL * (_QWORD)i);
        v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKey:", v10));
        v12 = objc_alloc((Class)&OBJC_CLASS___AFSpeechAcousticFeature);
        v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "acousticFeatureValuePerFrame"));
        objc_msgSend(v11, "frameDuration");
        v14 = objc_msgSend(v12, "initWithAcousticFeatureValue:frameDuration:", v13);
        objc_release(v13);
        objc_release(v11);
        objc_msgSend(v4, "setValue:forKey:", v14, v10);
        objc_release(v14);
      }
      v7 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v33, v37, 16LL);
    }
    while ( v7 );
  }
  objc_release(v5);
  v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v30, "speechRecognitionFeatures"));
  v16 = objc_alloc((Class)&OBJC_CLASS___AFSpeechAudioAnalytics);
  objc_msgSend(v30, "snr");
  v17 = objc_msgSend(v16, "initWithSpeechRecognitionFeatures:acousticFeatures:snr:", v15, v4);
  objc_release(v15);
  objc_release(v4);
  objc_release(v5);
  objc_release(v30);
  v31 = objc_retainAutoreleasedReturnValue(objc_msgSend(v32, "recognition"));
  v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v31, "tokenSausage"));
  v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v31, "interpretationIndices"));
  v20 = objc_retainAutoreleasedReturnValue((id)sub_100032CE0(v18, v19));
  objc_release(v19);
  objc_release(v18);
  objc_msgSend(v32, "utteranceStart");
  v21 = objc_retainAutoreleasedReturnValue(
          +[SFUtilities transcriptionFromSpeechPhrases:afAudioAnalytics:utteranceStart:](
            &OBJC_CLASS___SFUtilities,
            "transcriptionFromSpeechPhrases:afAudioAnalytics:utteranceStart:",
            v20,
            v17));
  objc_msgSend(v32, "utteranceStart");
  v22 = objc_retainAutoreleasedReturnValue(
          +[SFUtilities recognitionMetadataFromSpeechPhrases:afAudioAnalytics:utteranceStart:](
            &OBJC_CLASS___SFUtilities,
            "recognitionMetadataFromSpeechPhrases:afAudioAnalytics:utteranceStart:",
            v20,
            v17));
  v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v32, "preITNRecognition"));
  v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "tokenSausage"));
  v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "interpretationIndices"));
  v26 = objc_retainAutoreleasedReturnValue((id)sub_100032CE0(v24, v25));
  objc_release(v25);
  objc_release(v24);
  objc_msgSend(v32, "utteranceStart");
  v27 = objc_retainAutoreleasedReturnValue(
          +[SFUtilities transcriptionFromSpeechPhrases:afAudioAnalytics:utteranceStart:](
            &OBJC_CLASS___SFUtilities,
            "transcriptionFromSpeechPhrases:afAudioAnalytics:utteranceStart:",
            v26,
            v17));
  v28 = objc_msgSend(
          objc_alloc((Class)&OBJC_CLASS___SFSpeechRecognitionResult),
          "_initWithBestTranscription:rawTranscription:final:speechRecognitionMetadata:",
          v21,
          v27,
          objc_msgSend(v32, "isFinal"),
          v22);
  objc_release(v27);
  objc_release(v26);
  objc_release(v23);
  objc_release(v22);
  objc_release(v21);
  objc_release(v20);
  objc_release(v31);
  objc_release(v17);
  objc_release(v32);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v28);
}