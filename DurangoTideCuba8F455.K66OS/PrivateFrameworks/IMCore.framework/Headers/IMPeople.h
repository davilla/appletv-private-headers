/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSArray;

@interface IMPeople : NSObject {
	NSMutableArray *_people;	// 4 = 0x4
	int _coalesceCount;	// 8 = 0x8
	BOOL _hidePeople;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL coalescingChanges;	// G=0x30ade061; 
@property(readonly, assign, nonatomic) unsigned count;	// G=0x30ade4a1; 
@property(readonly, assign, nonatomic) NSArray *groups;	// G=0x30ade989; 
@property(assign, nonatomic, setter=setShouldHidePeople:) BOOL hidePeople;	// G=0x30ade03d; S=0x30ade5d9; 
@property(readonly, assign, nonatomic) NSArray *people;	// G=0x30ade439; 
- (id)init;	// 0x30ade695
- (void)_addedPeople:(id)people;	// 0x30ade31d
- (BOOL)addIMHandle:(id)handle;	// 0x30ade121
- (void)addNotificationObserver:(id)observer selector:(SEL)selector;	// 0x30ade4dd
- (BOOL)addPeopleFromArray:(id)array;	// 0x30ade079
- (BOOL)addPeopleFromArray:(id)array skipMe:(BOOL)me;	// 0x30ade6f1
- (void)addedIMHandle:(id)handle;	// 0x30ade399
- (void)beginCoalescedChanges;	// 0x30ade04d
// declared property getter: - (BOOL)coalescingChanges;	// 0x30ade061
- (BOOL)containsIMHandle:(id)handle;	// 0x30ade47d
// declared property getter: - (unsigned)count;	// 0x30ade4a1
- (void)dealloc;	// 0x30ade625
- (void)endCoalescedChanges;	// 0x30ade199
// declared property getter: - (id)groups;	// 0x30ade989
// declared property getter: - (BOOL)hidePeople;	// 0x30ade03d
- (void)imHandle:(id)handle buddyStatusChanged:(BOOL)changed;	// 0x30adeb3d
// declared property getter: - (id)people;	// 0x30ade439
- (BOOL)removeIMHandle:(id)handle;	// 0x30ade091
- (void)removeNotificationObserver:(id)observer;	// 0x30ade561
- (BOOL)removePeopleFromArray:(id)array;	// 0x30ade895
- (void)removedIMHandle:(id)handle;	// 0x30ade27d
// declared property setter: - (void)setShouldHidePeople:(BOOL)hidePeople;	// 0x30ade5d9
@end

