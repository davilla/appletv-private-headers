/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MFBaseFilterDataConsumer.h"


@interface MFBase64Encoder : MFBaseFilterDataConsumer {
	char *_table;	// 12 = 0xc
	unsigned _left;	// 16 = 0x10
	unsigned char _leftovers[3];	// 20 = 0x14
	unsigned _line;	// 24 = 0x18
	unsigned _lineBreak;	// 28 = 0x1c
	BOOL _padChar;	// 32 = 0x20
}
@property(assign, nonatomic) BOOL allowSlash;	// G=0x35e72d51; S=0x35e72d21; 
@property(assign, nonatomic) unsigned lineBreak;	// G=0x35e72d95; S=0x35e72da5; @synthesize=_lineBreak
@property(assign, nonatomic) BOOL padChar;	// G=0x35e72d75; S=0x35e72d85; @synthesize=_padChar
- (id)initWithConsumers:(id)consumers;	// 0x35e72e39
// declared property getter: - (BOOL)allowSlash;	// 0x35e72d51
- (int)appendData:(id)data;	// 0x35e73175
- (void)done;	// 0x35e72ea5
// declared property getter: - (unsigned long)lineBreak;	// 0x35e72d95
// declared property getter: - (BOOL)padChar;	// 0x35e72d75
// declared property setter: - (void)setAllowSlash:(BOOL)slash;	// 0x35e72d21
// declared property setter: - (void)setLineBreak:(unsigned long)aBreak;	// 0x35e72da5
// declared property setter: - (void)setPadChar:(BOOL)aChar;	// 0x35e72d85
- (void)setStandardLineBreak;	// 0x35e72e91
@end
