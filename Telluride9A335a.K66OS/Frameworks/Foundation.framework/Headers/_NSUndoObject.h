/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _NSUndoObject : NSObject {
@private
	_NSUndoObject *next;	// 4 = 0x4
	_NSUndoObject *previous;	// 8 = 0x8
	id _target;	// 12 = 0xc
}
@property(readonly, retain) id target;	// G=0x3204623d; converted property
- (id)init;	// 0x320456dd
- (id)initWithTarget:(id)target;	// 0x32045265
- (void)invoke;	// 0x320d2dd9
- (BOOL)isBeginMark;	// 0x32045869
- (BOOL)isEndMark;	// 0x32045861
// converted property getter: - (id)target;	// 0x3204623d
@end

