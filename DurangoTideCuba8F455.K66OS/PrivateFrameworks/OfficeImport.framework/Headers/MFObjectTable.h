/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MFObjectTable : NSObject {
@private
	NSMutableArray *m_objects;	// 4 = 0x4
}
- (id)init;	// 0x32b9a381
- (void)clear;	// 0x32b9f629
- (void)dealloc;	// 0x32ba96ed
- (int)deleteObject:(unsigned)object;	// 0x32b9f4a1
- (id)getObject:(unsigned)object;	// 0x32d3ca9d
- (unsigned)insertPos;	// 0x32ba18dd
- (int)putObject:(id)object :(unsigned)arg2;	// 0x32b9c31d
- (int)selectInto:(int)into :(id)arg2;	// 0x32b9c5c5
- (int)size;	// 0x32b9beb9
@end

