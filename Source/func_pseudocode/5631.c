-[KeyboardSettingsMediator registerKeys]
void __cdecl -[KeyboardSettingsMediator registerKeys](KeyboardSettingsMediator *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("KB_KeyRepeatThreshold"),
    "keyRepeatThreshold",
    "setKeyRepeatThreshold:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("KB_KeyRepeatInterval"),
    "keyRepeatInterval",
    "setKeyRepeatInterval:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("KB_AdjustBacklight"),
    "adjustBacklight",
    "setAdjustBacklight:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("KB_IdleDimTime"),
    "idleDimTime",
    "setIdleDimTime:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("KB_FnKeyFunction"),
    "fnKeyFunction",
    "setFnKeyFunction:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("KB_DFRPresentationModeDefault"),
    "DFRPresentationMode",
    "setDFRPresentationMode:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("KB_DFRFnBehavior"),
    "DFRFnBehavior",
    "setDFRFnBehavior:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("KB_UIMode"),
    "uiMode",
    "setUIMode:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("KB_TextInputMenu"),
    "textInputMenu",
    "setTextInputMenu:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("KB_CapsLockSwitch"),
    "capsLockSwitch",
    "setCapsLockSwitch:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("KB_PerContextInput"),
    "perContextInput",
    "setPerContextInput:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("KB_AutomaticSpellingCorrection"),
    "automaticSpellingCorrection",
    "setAutomaticSpellingCorrection:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("KB_AutomaticCapitalization"),
    "automaticCapitalization",
    "setAutomaticCapitalization:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("KB_AutomaticTextCompletion"),
    "automaticTextCompletion",
    "setAutomaticTextCompletion:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("KB_AutomaticQuote"),
    "automaticQuote",
    "setAutomaticQuote:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("KB_AutomaticDash"),
    "automaticDash",
    "setAutomaticDash:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("KB_AutomaticPeriod"),
    "automaticPeriod",
    "setAutomaticPeriod:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("KB_SpellingLanguage"),
    "spellingLanguage",
    "setSpellingLanguage:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("KB_SingleQuoteOption"),
    "singleQuoteOption",
    "setSingleQuoteOption:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("KB_DoubleQuoteOption"),
    "doubleQuoteOption",
    "setDoubleQuoteOption:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("KB_BidiSplitCursor"),
    "bidiSplitCursor",
    "setBidiSplitCursor:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("KB_BidiKeyboardShortcut"),
    "bidiKeyboardShortcut",
    "setBidiKeyboardShortcut:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("KB_BidiVisualSelection"),
    "bidiVisualSelection",
    "setBidiVisualSelection:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("KB_DictationShortcut"),
    "dictationShortcut",
    "setDictationShortcut:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    JIMPrefLiveConversionKey,
    "JIMLiveConversion",
    "setJIMLiveConversion:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    JIMPrefAutocorrectionKey,
    "JIMAutocorrection",
    "setJIMAutocorrection:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    JIMPrefWindowsModeKey,
    "JIMLiveWindowsMode",
    "setJIMWindowsMode:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    JIMPrefPredictiveCandidateKey,
    "JIMPredictiveCandidate",
    "setJIMPredictiveCandidate:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    JIMPrefConvertWithPunctuationKey,
    "JIMConvertWithPunctuation",
    "setJIMConvertWithPunctuation:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    JIMPrefPunctuationTypeKey,
    "JIMPunctuationType",
    "setJIMPunctuationType:");
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    JIMPrefFullWidthNumeralCharactersKey,
    "JIMFullWidthNumeralCharacters",
    "setJIMFullWidthNumeralCharacters:");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[KeyboardSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("KB_DictationLanguage"),
    "dictationLanguage",
    "setDictationLanguage:");
}