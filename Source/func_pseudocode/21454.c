-[LSRLanguageModel oovsFromSentenceAddedToNgramCounts:]
id __cdecl -[LSRLanguageModel oovsFromSentenceAddedToNgramCounts:](LSRLanguageModel *self, SEL a2, id a3)
{
  return -[_EARAppLmData addOovTokensFromSentence:](self->_appLmData, "addOovTokensFromSentence:", a3);
}