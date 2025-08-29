-[_TtC33SiriSuggestionsBookkeepingService26BookkeepingServiceDelegate .cxx_destruct]
void __cdecl -[BookkeepingServiceDelegate .cxx_destruct](
        _TtC33SiriSuggestionsBookkeepingService26BookkeepingServiceDelegate *self,
        SEL a2)
{
  char *v3; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  sub_1000050E4(
    (char *)self
  + OBJC_IVAR____TtC33SiriSuggestionsBookkeepingService26BookkeepingServiceDelegate_suggestionsLoggerFactory);
  sub_1000050E4((char *)self + OBJC_IVAR____TtC33SiriSuggestionsBookkeepingService26BookkeepingServiceDelegate_featureServiceFactory);
  v3 = (char *)self
     + OBJC_IVAR____TtC33SiriSuggestionsBookkeepingService26BookkeepingServiceDelegate_featureFlagProvider;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  sub_1000050E4(v3);
}