/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "SFUCryptor.h"
#import "iWorkImport-Structs.h"

@class SFUCryptoKey;

__attribute__((visibility("hidden")))
@interface SFUCommonCryptoCryptor : SFUCryptor {
@private
	int mOperation;	// 4 = 0x4
	SFUCryptoKey *mKey;	// 8 = 0x8
	CCCryptorRef mCryptor;	// 12 = 0xc
	unsigned long mBlockSize;	// 16 = 0x10
	BOOL mFinished;	// 20 = 0x14
	char *mDecryptionInputBuffer;	// 24 = 0x18
	char *mOutputBuffer;	// 28 = 0x1c
	char *mOutputBufferPos;	// 32 = 0x20
	unsigned long mOutputBufferAvailable;	// 36 = 0x24
}
- (id)initWithKey:(id)key operation:(int)operation iv:(const char *)iv ivLength:(unsigned long)length;	// 0x36cbb515
- (BOOL)cryptDataFromBuffer:(const char *)buffer length:(unsigned long)length toStream:(id)stream finished:(BOOL)finished error:(id *)error;	// 0x36cbb6d9
- (BOOL)cryptDataFromStream:(id)stream toBuffer:(char *)buffer length:(unsigned long)length bytesRead:(unsigned *)read error:(id *)error;	// 0x36cbb711
- (void)dealloc;	// 0x36cbb64d
@end

