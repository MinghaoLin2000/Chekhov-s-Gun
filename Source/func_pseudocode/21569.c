_ExtAudioFileWriteAsync
OSStatus __cdecl ExtAudioFileWriteAsync(
        ExtAudioFileRef inExtAudioFile,
        UInt32 inNumberFrames,
        const AudioBufferList *ioData)
{
  return _ExtAudioFileWriteAsync(inExtAudioFile, inNumberFrames, ioData);
}