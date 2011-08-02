/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMNode.h"

@class NSString;

@interface DOMCharacterData : DOMNode {
}
@property(copy) NSString *data;	// G=0x31647c2d; S=0x3181cad1; 
@property(readonly, assign) unsigned length;	// G=0x3181cabd; 
- (void)appendData:(id)data;	// 0x3181cea5
// declared property getter: - (id)data;	// 0x31647c2d
- (void)deleteData:(unsigned)data :(unsigned)arg2;	// 0x3181d28d
- (void)deleteData:(unsigned)data length:(unsigned)length;	// 0x3181d251
- (void)insertData:(unsigned)data :(id)arg2;	// 0x3181d115
- (void)insertData:(unsigned)data data:(id)data2;	// 0x3181cfd9
// declared property getter: - (unsigned)length;	// 0x3181cabd
- (void)replaceData:(unsigned)data :(unsigned)arg2 :(id)arg3;	// 0x3181d409
- (void)replaceData:(unsigned)data length:(unsigned)length data:(id)data3;	// 0x3181d2c9
// declared property setter: - (void)setData:(id)data;	// 0x3181cad1
- (id)substringData:(unsigned)data :(unsigned)arg2;	// 0x3181cd55
- (id)substringData:(unsigned)data length:(unsigned)length;	// 0x3181cc05
@end

