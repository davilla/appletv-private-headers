/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MFBaseFilterDataConsumer.h"
#import "MIME-Structs.h"


@interface MFRangedDataFilter : MFBaseFilterDataConsumer {
	NSRange _range;	// 12 = 0xc
	unsigned _consumedLength;	// 20 = 0x14
}
@property(assign, nonatomic) NSRange range;	// G=0x30c5b581; S=0x30c5b59d; @synthesize=_range
+ (id)rangedFilterWithConsumer:(id)consumer range:(NSRange)range;	// 0x30c5b945
+ (id)rangedFilterWithConsumers:(id)consumers range:(NSRange)range;	// 0x30c5b90d
- (int)appendData:(id)data;	// 0x30c5be31
// declared property getter: - (NSRange)range;	// 0x30c5b581
// declared property setter: - (void)setRange:(NSRange)range;	// 0x30c5b59d
@end

