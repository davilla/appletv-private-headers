/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLIntermediate.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSSQLGroupByIntermediate : NSSQLIntermediate {
@private
	NSArray *_properties;	// 8 = 0x8
}
- (id)initWithProperties:(id)properties inScope:(id)scope;	// 0x33f00fc5
- (void)dealloc;	// 0x33f00f79
- (id)generateSQLStringInContext:(id)context;	// 0x33f01015
@end

