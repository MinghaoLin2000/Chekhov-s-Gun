-[_TtC33SiriSuggestionsBookkeepingService33SiriSuggestionsBookkeepingService .cxx_destruct]
void __cdecl -[SiriSuggestionsBookkeepingService .cxx_destruct](
        _TtC33SiriSuggestionsBookkeepingService33SiriSuggestionsBookkeepingService *self,
        SEL a2)
{
  sub_1000050E4(
    (char *)self
  + OBJC_IVAR____TtC33SiriSuggestionsBookkeepingService33SiriSuggestionsBookkeepingService_suggestionsLoggerFactory);
  sub_1000050E4(
    (char *)self
  + OBJC_IVAR____TtC33SiriSuggestionsBookkeepingService33SiriSuggestionsBookkeepingService_featureServiceFactory);
  sub_1000050E4(
    (char *)self
  + OBJC_IVAR____TtC33SiriSuggestionsBookkeepingService33SiriSuggestionsBookkeepingService_featureFlagProvider);
  sub_1000050E4((char *)self + OBJC_IVAR____TtC33SiriSuggestionsBookkeepingService33SiriSuggestionsBookkeepingService_accountService);
}