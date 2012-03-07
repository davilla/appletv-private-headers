/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library
#import "DAEAS-Structs.h"

@class NSFileHandle, NSMutableArray, NSString;

@interface ASParseContext : NSObject {
	NSMutableArray *_dataBuffers;	// 4 = 0x4
	unsigned _offsetIntoFirstData;	// 8 = 0x8
	long long _curOffset;	// 12 = 0xc
	int _codePage;	// 20 = 0x14
	NSString *_parseErrorReason;	// 24 = 0x18
	BOOL _moreDataExpected;	// 28 = 0x1c
	int _dataGeneration;	// 32 = 0x20
	long long _expectedTotalBytesCount;	// 36 = 0x24
	long long _currentBytesReceivedCount;	// 44 = 0x2c
	unsigned _lastFoundBufferWithoutLineEnding;	// 52 = 0x34
	unsigned _numTokensInBuffersWithoutLineEndings;	// 56 = 0x38
	BOOL _lastLookedAtBufferHadStringEndPrefix;	// 60 = 0x3c
	BOOL _keepPreviousData;	// 61 = 0x3d
	NSMutableArray *_bypassedDataBuffers;	// 64 = 0x40
	NSFileHandle *_logFileHandle;	// 68 = 0x44
	NSString *_logFilePath;	// 72 = 0x48
	int _streamingState;	// 76 = 0x4c
}
@property(assign) int codePage;	// G=0x31591d7d; S=0x31591d8d; @synthesize=_codePage
@property(readonly, assign) long long curOffset;	// G=0x31591d49; @synthesize=_curOffset
@property(readonly, assign) long long currentBytesReceivedCount;	// G=0x31591e7d; @synthesize=_currentBytesReceivedCount
@property(assign) int dataGeneration;	// G=0x31591df5; S=0x31591e05; @synthesize=_dataGeneration
@property(assign) long long expectedTotalBytesCount;	// G=0x31591e15; S=0x31591e49; @synthesize=_expectedTotalBytesCount
@property(assign) BOOL keepPreviousData;	// G=0x31591ed1; S=0x31591ee1; @synthesize=_keepPreviousData
@property(assign) BOOL moreDataExpected;	// G=0x31591dd5; S=0x31591de5; @synthesize=_moreDataExpected
@property(retain) NSString *parseErrorReason;	// G=0x31591d9d; S=0x31591db1; @synthesize=_parseErrorReason
@property(assign, nonatomic) int streamingState;	// G=0x31591eb1; S=0x31591ec1; @synthesize=_streamingState
+ (dispatch_queue_s *)_logQueue;	// 0x3159056d
- (id)init;	// 0x31590599
- (void)_logBlobChunk:(id)chunk;	// 0x31591659
- (void)_moveLogFileContentsAtPath:(id)path;	// 0x3159078d
- (int)_numTokensForNextOpaqueDataCheckNumTokens:(BOOL)nextOpaqueDataCheckNumTokens;	// 0x31591b95
- (void)addData:(id)data;	// 0x3159179d
- (BOOL)advanceOffsetByAmount:(unsigned)amount;	// 0x31591521
- (BOOL)advanceOffsetByAmount:(unsigned)amount retainLastToken:(BOOL)token;	// 0x31591381
- (char *)bufferForLength:(unsigned)length shouldFree:(BOOL *)free;	// 0x3159119d
- (id)bufferWithAllData;	// 0x315910b5
- (unsigned char)byteAtOffsetFromCurrentByte:(unsigned)currentByte;	// 0x31591a09
// declared property getter: - (int)codePage;	// 0x31591d7d
// declared property getter: - (long long)curOffset;	// 0x31591d49
- (unsigned char)currentByte;	// 0x31591879
// declared property getter: - (long long)currentBytesReceivedCount;	// 0x31591e7d
// declared property getter: - (int)dataGeneration;	// 0x31591df5
- (void)dealloc;	// 0x31590b45
// declared property getter: - (long long)expectedTotalBytesCount;	// 0x31591e15
- (long)goodSizeForBuffer;	// 0x31591035
- (BOOL)hasNumberOfTokensRemaining:(unsigned)tokensRemaining;	// 0x31590bf9
- (void)invalidateBuffers;	// 0x31591cd9
// declared property getter: - (BOOL)keepPreviousData;	// 0x31591ed1
// declared property getter: - (BOOL)moreDataExpected;	// 0x31591dd5
- (unsigned char)nextByte;	// 0x31591b0d
- (int)numTokensForNextOpaqueData;	// 0x31591c5d
- (int)numTokensForNextString;	// 0x31591b25
- (int)numTokensStreamableForNextStringSizeOfTerminator:(int *)terminator;	// 0x31591c71
- (int)numberOfBytesUntilStringEnd:(char *)bytesUntilStringEnd searchStringLength:(int)length acceptingBufferBits:(BOOL)bits;	// 0x31590cbd
// declared property getter: - (id)parseErrorReason;	// 0x31591d9d
- (void)resetToZeroOffset;	// 0x31591539
// declared property setter: - (void)setCodePage:(int)page;	// 0x31591d8d
// declared property setter: - (void)setDataGeneration:(int)generation;	// 0x31591e05
// declared property setter: - (void)setExpectedTotalBytesCount:(long long)count;	// 0x31591e49
// declared property setter: - (void)setKeepPreviousData:(BOOL)data;	// 0x31591ee1
// declared property setter: - (void)setMoreDataExpected:(BOOL)expected;	// 0x31591de5
// declared property setter: - (void)setParseErrorReason:(id)reason;	// 0x31591db1
- (void)setShouldLog:(BOOL)log;	// 0x315905e5
// declared property setter: - (void)setStreamingState:(int)state;	// 0x31591ec1
// declared property getter: - (int)streamingState;	// 0x31591eb1
@end
