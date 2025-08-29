+[LSRConnection modelRootWithLanguage:assetType:clientID:modelOverrideURL:error:]
id __cdecl +[LSRConnection modelRootWithLanguage:assetType:clientID:modelOverrideURL:error:](
        id a1,
        SEL a2,
        id a3,
        unsigned __int64 a4,
        id a5,
        id a6,
        id *a7)
{
  return objc_msgSend(
           a1,
           "modelRootWithLanguage:assetType:clientID:modelOverrideURL:isSpelling:error:",
           a3,
           a4,
           a5,
           a6,
           0LL,
           a7);
}