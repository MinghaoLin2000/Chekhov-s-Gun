-[DeviceSettingsPhotosViewController .cxx_destruct]
void __cdecl -[DeviceSettingsPhotosViewController .cxx_destruct](DeviceSettingsPhotosViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_rootMediaGroup, 0LL);
  objc_storeStrong((id *)&self->_fileEventObserver, 0LL);
  objc_storeStrong((id *)&self->_originalCheckedItems, 0LL);
  objc_storeStrong((id *)&self->_originalPhotoSyncPrefs, 0LL);
  objc_storeStrong((id *)&self->_faceImage, 0LL);
  objc_storeStrong((id *)&self->_photosAppURL, 0LL);
  objc_storeStrong((id *)&self->_picturesURL, 0LL);
  objc_storeStrong((id *)&self->_fromSecurityScopedBookmarkURL, 0LL);
  objc_storeStrong((id *)&self->_folderURL, 0LL);
  objc_storeStrong((id *)&self->_savedTabViewItemsLookupDictionary, 0LL);
  objc_storeStrong((id *)&self->_photoSyncPrefs, 0LL);
  objc_storeStrong((id *)&self->_deferredPhotoSyncErrorMessage, 0LL);
  objc_storeStrong(&self->_sharingCompletion, 0LL);
  objc_destroyWeak((id *)&self->_sharingCancelButton);
  objc_destroyWeak((id *)&self->_sharingOKButton);
  objc_destroyWeak((id *)&self->_progressIndicator);
  objc_destroyWeak((id *)&self->_tabView);
  objc_destroyWeak((id *)&self->_includeFullResPhotosStackView);
  objc_destroyWeak((id *)&self->_includeFullResPhotosTextField);
  objc_destroyWeak((id *)&self->_includeFullResPhotosCheckBox);
  objc_destroyWeak((id *)&self->_autoIncludePhotosFromStackView);
  objc_destroyWeak((id *)&self->_autoIncludePhotosFromPopUpButton);
  objc_destroyWeak((id *)&self->_autoIncludePhotosFromCheckBox);
  objc_destroyWeak((id *)&self->_includeVideosCheckBox);
  objc_destroyWeak((id *)&self->_onlyFavoritesCheckBox);
  objc_destroyWeak((id *)&self->_updateSelectedRadioButton);
  objc_destroyWeak((id *)&self->_allRadioButton);
  objc_destroyWeak((id *)&self->_photoSourceExplanationTextField);
  objc_destroyWeak((id *)&self->_photoSourceExplanationContainingView);
  objc_destroyWeak((id *)&self->_photoSourcePopUpButton);
  objc_destroyWeak((id *)&self->_optionsAreaTitleTextField);
  objc_destroyWeak((id *)&self->_syncAreaTitleTextField);
  objc_destroyWeak((id *)&self->_syncOntoTextField);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_syncOntoCheckBox);
}