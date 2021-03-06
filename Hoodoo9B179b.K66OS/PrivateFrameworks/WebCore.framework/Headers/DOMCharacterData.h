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
@property(copy) NSString *data;	// G=0x334c2bcd; S=0x33721109; 
@property(readonly, assign) unsigned length;	// G=0x337210d9; 
- (void)appendData:(id)data;	// 0x33721519
// declared property getter: - (id)data;	// 0x334c2bcd
- (void)deleteData:(unsigned)data :(unsigned)arg2;	// 0x337219c9
- (void)deleteData:(unsigned)data length:(unsigned)length;	// 0x337218f9
- (void)insertData:(unsigned)data :(id)arg2;	// 0x337217ad
- (void)insertData:(unsigned)data data:(id)data2;	// 0x33721661
// declared property getter: - (unsigned)length;	// 0x337210d9
- (void)replaceData:(unsigned)data :(unsigned)arg2 :(id)arg3;	// 0x33721be9
- (void)replaceData:(unsigned)data length:(unsigned)length data:(id)data3;	// 0x33721a99
// declared property setter: - (void)setData:(id)data;	// 0x33721109
- (id)substringData:(unsigned)data :(unsigned)arg2;	// 0x337213b5
- (id)substringData:(unsigned)data length:(unsigned)length;	// 0x33721251
@end

