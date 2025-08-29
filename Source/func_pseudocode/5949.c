_$s33SiriSuggestionsBookkeepingService014DefaultFeatureD7FactoryC6create19featureFlagProvider06configK0014accountDetailsK8Override14possibleOwners0aB12Intelligence01_fD0_p0aB3Kit0fjK0_p_AI024SSFeatureExtractorConfigK0_pAI09SSAccountnK0_pSgAK14OwnerProvidersCtYaF
__int64 __fastcall DefaultFeatureServiceFactory.create(featureFlagProvider:configProvider:accountDetailsProviderOverride:possibleOwners:)(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // x20
  _QWORD *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x16
  unsigned __int64 v9; // x20
  __int64 v11; // [xsp+18h] [xbp-8h]

  v6[21] = a5;
  v6[22] = v5;
  v6[19] = a3;
  v6[20] = a4;
  v6[17] = a1;
  v6[18] = a2;
  v7 = sub_10000D9B8(0LL);
  v6[23] = v7;
  v8 = *(_QWORD *)(v7 - 8);
  v6[24] = v8;
  v9 = (*(_QWORD *)(v8 + 64) + 15LL) & 0xFFFFFFFFFFFFFFF0LL;
  v6[25] = swift_task_alloc(v9);
  v6[26] = swift_task_alloc(v9);
  if ( ((v11 ^ (2 * v11)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return _swift_task_switch(sub_100005D70, 0LL, 0LL);
}