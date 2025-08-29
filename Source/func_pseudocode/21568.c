_ExtAudioFileWrapAudioFileID
OSStatus __cdecl ExtAudioFileWrapAudioFileID(
        AudioFileID inFileID,
        Boolean inForWriting,
        ExtAudioFileRef *outExtAudioFile)
{
  return _ExtAudioFileWrapAudioFileID(inFileID, inForWriting, outExtAudioFile);
}