/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OCDEncryptedReader.h"


@interface OCBReader : OCDEncryptedReader {
	OcBinaryReader *mBinaryReader;	// 36 = 0x24
	FILE *mFile;	// 40 = 0x28
}
@property(assign, nonatomic) OcBinaryReader *binaryReader;	// G=0x33952f99; S=0x33952c9d; @synthesize=mBinaryReader
@property(readonly, assign, nonatomic) OCCEncryptionInfoReader *encryptionInfoReader;	// G=0x33bac3a1; 
@property(assign, nonatomic) FILE *file;	// G=0x33952ff9; S=0x33952fb9; @synthesize=mFile
- (id)initWithCancelDelegate:(id)cancelDelegate tracing:(id)tracing;	// 0x33952805
- (OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(OCCCryptoKey *)cryptoKey baseOutputFilenameInUTF8:(const char *)utf8;	// 0x33bac3a9
- (id)allocDecryptorWithCryptoKey:(OCCCryptoKey *)cryptoKey baseOutputFilename:(id)filename;	// 0x33bac3ad
// declared property getter: - (OcBinaryReader *)binaryReader;	// 0x33952f99
- (void)closeFile;	// 0x339dfb55
- (void)dealloc;	// 0x339dedc9
// declared property getter: - (OCCEncryptionInfoReader *)encryptionInfoReader;	// 0x33bac3a1
// declared property getter: - (FILE *)file;	// 0x33952ff9
- (bool)isBinaryReader;	// 0x33bac3a5
- (id)read;	// 0x33bac4e1
- (void)restartReaderToUseDecryptedDocument;	// 0x33bac431
- (BOOL)retainDecryptorWithErrorCode:(int *)errorCode;	// 0x339578a1
// declared property setter: - (void)setBinaryReader:(OcBinaryReader *)reader;	// 0x33952c9d
// declared property setter: - (void)setFile:(FILE *)file;	// 0x33952fb9
- (BOOL)start;	// 0x33bac4dd
@end

