+[TSPAVAssetResourceLoaderDelegate shouldDisableEntireLengthAvailableOnDemand]
bool __cdecl +[TSPAVAssetResourceLoaderDelegate shouldDisableEntireLengthAvailableOnDemand](id a1, SEL a2)
{
  if ( qword_1001F7458 != -1 )
    dispatch_once(&qword_1001F7458, &stru_1001D1678);
  return byte_1001F7450;
}