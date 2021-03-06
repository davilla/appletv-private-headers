/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "IMCore-Structs.h"
#import "IMDirectlyObservableObjectObserver.h"
#import "NSCopying.h"

@class NSDate, NSAttributedString, IMBuddyListPresence, IMPeopleListGroup, NSString, NSMutableAttributedString, IMHandle;

@interface IMPeopleListItem : XXUnknownSuperclass <NSCopying, IMDirectlyObservableObjectObserver> {
	id _delegate;	// 8 = 0x8
	IMBuddyListPresence *_presence;	// 12 = 0xc
	NSDate *_whenStatusChanged;	// 16 = 0x10
	IMPeopleListGroup *_group;	// 20 = 0x14
	NSAttributedString *_attributedStatusMessage;	// 24 = 0x18
	NSString *_statusMessage;	// 28 = 0x1c
	NSString *_displayName;	// 32 = 0x20
	NSDate *_transitionStartTime;	// 36 = 0x24
	float _currentTransitionTime;	// 40 = 0x28
	unsigned _currentStatus;	// 44 = 0x2c
	unsigned _previousStatus;	// 48 = 0x30
	int _minutesIdle;	// 52 = 0x34
	BOOL _inTransition;	// 56 = 0x38
	BOOL _isGroup;	// 57 = 0x39
}
@property(retain, nonatomic) IMBuddyListPresence *buddyListPresence;	// G=0x303a0a7d; S=0x303a1895; 
@property(readonly, assign, nonatomic) BOOL canTransition;	// G=0x303a12f9; 
@property(readonly, assign, nonatomic) unsigned currentStatus;	// G=0x303a0ad9; 
@property(assign, nonatomic) id delegate;	// G=0x303a0a6d; S=0x303a0a5d; 
@property(readonly, assign, nonatomic) NSMutableAttributedString *displayName;	// G=0x303a13ed; 
@property(readonly, assign, nonatomic) NSAttributedString *displayStatusMessage;	// G=0x303a0b4d; 
@property(readonly, assign, nonatomic) unsigned effectiveStatus;	// G=0x303a1fe9; 
@property(readonly, assign, nonatomic) NSString *group;	// G=0x303a1479; 
@property(readonly, assign, nonatomic) IMHandle *imHandle;	// G=0x303a1439; 
@property(readonly, assign, nonatomic) BOOL inStatusTransition;	// G=0x303a0ae9; 
@property(readonly, assign, nonatomic) BOOL isGroup;	// G=0x303a0ab5; 
@property(readonly, assign, nonatomic) BOOL isIMHandle;	// G=0x303a145d; 
@property(readonly, assign, nonatomic) BOOL isPulseTransition;	// G=0x303a0af9; 
@property(retain, nonatomic) IMPeopleListGroup *peopleListGroup;	// G=0x303a0a91; S=0x303a0aa1; 
@property(readonly, assign, nonatomic) unsigned previousStatus;	// G=0x303a0ac9; 
@property(readonly, assign, nonatomic) unsigned sortOrder;	// G=0x303a0b2d; 
@property(readonly, assign, nonatomic) double timeSinceStatusChanged;	// G=0x303a135d; 
+ (id)displayNameForString:(id)string;	// 0x303a0cad
+ (id)displayStatusMessageForString:(id)string;	// 0x303a0c4d
+ (id)notifications;	// 0x303a1a31
+ (id)selectors;	// 0x303a197d
- (id)initAsGroup:(id)group;	// 0x303a1b6d
- (id)initWithBuddyListPresence:(id)buddyListPresence inGroup:(id)group;	// 0x303a1c29
- (void)_cacheCurrentState;	// 0x303a15dd
- (int)_compareIMHandlesWith:(id)with withSortParameters:(XXStruct_xDJerA *)sortParameters;	// 0x303a2239
- (BOOL)_currentInfoDiffersFromCache;	// 0x303a14fd
- (BOOL)_currentStatusDiffersFromCache;	// 0x303a14c5
- (void)_observePresence:(id)presence;	// 0x303a1949
- (void)_postNotificationNamed:(id)named userInfo:(id)info;	// 0x303a1b1d
- (void)_presenceCapabilitiesChanged:(id)changed;	// 0x303a17b1
- (void)_presenceCertsChanged:(id)changed;	// 0x303a0a8d
- (void)_presenceGroupsChanged:(id)changed;	// 0x303a16ed
- (void)_presenceInfoChanged:(id)changed;	// 0x303a1821
- (void)_presenceMobileChanged:(id)changed;	// 0x303a16b5
- (void)_presencePictureChanged:(id)changed;	// 0x303a1725
- (void)_presenceSortOrderChanged:(id)changed;	// 0x303a17e9
- (void)_presenceStatusChanged:(id)changed;	// 0x303a175d
- (void)_setWhenStatusChanged:(id)changed;	// 0x303a202d
- (void)_startAnimationPusling:(BOOL)pusling;	// 0x303a11a1
- (void)_startPulse;	// 0x303a1171
- (void)_startStatusTransition;	// 0x303a1189
- (void)_unobservePresence:(id)presence;	// 0x303a1915
- (BOOL)_updateCurrentStatus;	// 0x303a138d
// declared property getter: - (id)buddyListPresence;	// 0x303a0a7d
// declared property getter: - (BOOL)canTransition;	// 0x303a12f9
- (void)clearAttributedStatusMessageCache;	// 0x303a0ced
- (int)compare:(id)compare withSortParameters:(XXStruct_xDJerA *)sortParameters;	// 0x303a0d15
- (id)copyWithZone:(NSZone *)zone;	// 0x303a1b59
// declared property getter: - (unsigned)currentStatus;	// 0x303a0ad9
- (void)dealloc;	// 0x303a1cfd
// declared property getter: - (id)delegate;	// 0x303a0a6d
- (id)description;	// 0x303a1dbd
// declared property getter: - (id)displayName;	// 0x303a13ed
// declared property getter: - (id)displayStatusMessage;	// 0x303a0b4d
// declared property getter: - (unsigned)effectiveStatus;	// 0x303a1fe9
// declared property getter: - (id)group;	// 0x303a1479
// declared property getter: - (id)imHandle;	// 0x303a1439
// declared property getter: - (BOOL)inStatusTransition;	// 0x303a0ae9
- (BOOL)isEqual:(id)equal;	// 0x303a0a51
// declared property getter: - (BOOL)isGroup;	// 0x303a0ab5
// declared property getter: - (BOOL)isIMHandle;	// 0x303a145d
// declared property getter: - (BOOL)isPulseTransition;	// 0x303a0af9
- (void)objectDidPostDirectNotification:(id)object;	// 0x303a1f45
// declared property getter: - (id)peopleListGroup;	// 0x303a0a91
// declared property getter: - (unsigned)previousStatus;	// 0x303a0ac9
// declared property setter: - (void)setBuddyListPresence:(id)presence;	// 0x303a1895
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x303a0a5d
// declared property setter: - (void)setPeopleListGroup:(id)group;	// 0x303a0aa1
// declared property getter: - (unsigned)sortOrder;	// 0x303a0b2d
- (void)startPulse;	// 0x303a10e9
- (void)stopTransition;	// 0x303a1065
// declared property getter: - (double)timeSinceStatusChanged;	// 0x303a135d
- (id)tooltipString;	// 0x303a0ac5
- (float)transitionAlphaTo:(float)to from:(float)from throbs:(unsigned)throbs;	// 0x303a0f75
- (float)transitionPhase:(float)phase;	// 0x303a2151
@end

