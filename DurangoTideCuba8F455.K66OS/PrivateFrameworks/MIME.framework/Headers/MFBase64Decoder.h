/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MFBaseFilterDataConsumer.h"

@class NSMutableData;

@interface MFBase64Decoder : MFBaseFilterDataConsumer {
	NSMutableData *_leftovers;	// 12 = 0xc
	unsigned _decodedBits;	// 16 = 0x10
	unsigned _validBytes;	// 20 = 0x14
	unsigned _equalCount;	// 24 = 0x18
	char *_table;	// 28 = 0x1c
	BOOL _bound;	// 32 = 0x20
}
@property(assign, nonatomic) BOOL convertCommas;	// G=0x31511c89; S=0x31511c61; 
@property(assign, nonatomic) BOOL isBound;	// G=0x31511ca9; S=0x31511cb9; @synthesize=_bound
@property(readonly, assign, nonatomic) unsigned unconverted;	// G=0x31511cc9; @synthesize=_validBytes
+ (BOOL)isValidBase64:(id)a64;	// 0x31511d69
- (id)initWithConsumers:(id)consumers;	// 0x31511cd9
- (unsigned long)_decodeBytes:(const char *)bytes end:(const char *)end into:(char *)into length:(unsigned long)length startingAt:(unsigned long)at outEncodedOffset:(unsigned *)offset;	// 0x31511ff9
- (int)appendData:(id)data;	// 0x31512811
// declared property getter: - (BOOL)convertCommas;	// 0x31511c89
- (void)dealloc;	// 0x31511df9
- (void)done;	// 0x31511e41
// declared property getter: - (BOOL)isBound;	// 0x31511ca9
// declared property setter: - (void)setConvertCommas:(BOOL)commas;	// 0x31511c61
// declared property setter: - (void)setIsBound:(BOOL)bound;	// 0x31511cb9
// declared property getter: - (unsigned long)unconverted;	// 0x31511cc9
@end

