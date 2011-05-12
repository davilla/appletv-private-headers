/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import <NSObject.h> // Unknown library

@class DACalendarDatabase;

@interface DACalendarObject : NSObject {
	DACalendarDatabase *_database;	// 4 = 0x4
	void *_ref;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) DACalendarDatabase *database;	// G=0x3023e80d; @synthesize=_database
@property(readonly, assign, nonatomic) void *ref;	// G=0x3023e7fd; @synthesize=_ref
+ (id)NSArrayFromCFArray:(CFArrayRef)cfarray objectClass:(Class)aClass database:(id)database;	// 0x3023e8e1
- (id)initWithDatabase:(id)database ref:(void *)ref;	// 0x3023e81d
// declared property getter: - (id)database;	// 0x3023e80d
- (void)dealloc;	// 0x3023e889
// declared property getter: - (void *)ref;	// 0x3023e7fd
@end

