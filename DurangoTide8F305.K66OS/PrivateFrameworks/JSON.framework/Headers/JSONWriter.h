/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/JSON.framework/JSON
 */

#import "JSON.h"


__attribute__((visibility("hidden")))
@interface JSONWriter : JSON {
}
- (BOOL)appendArray:(id)array into:(id)into;	// 0x30b9e0d5
- (BOOL)appendDictionary:(id)dictionary into:(id)into;	// 0x30b9de15
- (BOOL)appendString:(id)string into:(id)into;	// 0x30b9e289
- (BOOL)appendValue:(id)value into:(id)into;	// 0x30b9dc5d
- (id)indent;	// 0x30b9da5d
- (id)stringWithObject:(id)object;	// 0x30b9daa5
@end

