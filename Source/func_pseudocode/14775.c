-[UINSSystemPreferencesServiceViewController .cxx_destruct]
void __cdecl -[UINSSystemPreferencesServiceViewController .cxx_destruct](
        UINSSystemPreferencesServiceViewController *self,
        SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_instructionsLabel, 0LL);
  objc_storeStrong((id *)&self->_usageLabel, 0LL);
  objc_storeStrong((id *)&self->_descriptionLabel, 0LL);
  objc_storeStrong((id *)&self->_launchSystemPreferencesButton, 0LL);
  objc_storeStrong((id *)&self->_tableView, 0LL);
  objc_storeStrong((id *)&self->_applicationBundle, 0LL);
  objc_storeStrong((id *)&self->_applicationBundleID, 0LL);
  objc_storeStrong((id *)&self->_applicationName, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_settings, 0LL);
}