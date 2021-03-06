/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "BBBulletin.h"
#import "BulletinBoard-Structs.h"

@class NSString, NSArray, NSSet, BBAction, NSDate, NSTimeZone, BBSound, BBContent;

@interface BBBulletinRequest : BBBulletin {
	unsigned _expirationEvents;	// 136 = 0x88
}
@property(assign, nonatomic) int accessoryStyle;	// @dynamic
@property(copy, nonatomic) BBAction *acknowledgeAction;	// @dynamic
@property(assign, nonatomic) int addressBookRecordID;	// @dynamic
@property(copy, nonatomic) NSSet *alertSuppressionContexts;	// @dynamic
@property(copy, nonatomic) BBAction *alternateAction;	// @dynamic
@property(copy, nonatomic) NSString *bulletinID;	// @dynamic
@property(copy, nonatomic) NSArray *buttons;	// @dynamic
@property(assign, nonatomic) BOOL clearable;	// @dynamic
@property(retain, nonatomic) NSDate *date;	// @dynamic
@property(assign, nonatomic) int dateFormatStyle;	// @dynamic
@property(assign, nonatomic) BOOL dateIsAllDay;	// @dynamic
@property(copy, nonatomic) BBAction *defaultAction;	// @dynamic
@property(retain, nonatomic) NSDate *endDate;	// @dynamic
@property(retain, nonatomic) NSDate *expirationDate;	// @dynamic
@property(assign, nonatomic) unsigned expirationEvents;	// G=0x37253909; S=0x37253919; @synthesize=_expirationEvents
@property(copy, nonatomic) BBAction *expireAction;	// @dynamic
@property(assign, nonatomic) BOOL expiresOnPublisherDeath;	// @dynamic
@property(copy, nonatomic) NSString *message;	// @dynamic
@property(retain, nonatomic) BBContent *modalAlertContent;	// @dynamic
@property(assign, nonatomic) int primaryAttachmentType;	// S=0x372534c1; @dynamic
@property(copy, nonatomic) NSString *publisherBulletinID;	// @dynamic
@property(assign, nonatomic) unsigned realertCount;	// G=0x372536b9; S=0x372536c9; 
@property(retain, nonatomic) NSDate *recencyDate;	// @dynamic
@property(copy, nonatomic) NSString *recordID;	// @dynamic
@property(copy, nonatomic) NSString *section;	// @dynamic
@property(copy, nonatomic) NSString *sectionID;	// @dynamic
@property(assign, nonatomic) int sectionSubtype;	// @dynamic
@property(assign, nonatomic) BOOL showsUnreadIndicator;	// G=0x372538a5; S=0x37253851; 
@property(retain, nonatomic) BBSound *sound;	// @dynamic
@property(copy, nonatomic) NSSet *subsectionIDs;	// @dynamic
@property(copy, nonatomic) NSString *subtitle;	// @dynamic
@property(assign, nonatomic) BOOL tentative;	// G=0x372538f1; S=0x372538c1; 
@property(retain, nonatomic) NSTimeZone *timeZone;	// @dynamic
@property(copy, nonatomic) NSString *title;	// @dynamic
- (void)addAlertSuppressionAppID:(id)anId;	// 0x372536d9
- (void)addAttachmentOfType:(int)type;	// 0x372534f1
- (void)addButton:(id)button;	// 0x37253521
// declared property getter: - (unsigned)expirationEvents;	// 0x37253909
- (void)generateBulletinID;	// 0x3725384d
- (void)generateNewBulletinID;	// 0x37253d71
- (BOOL)hasContentModificationsRelativeTo:(id)to;	// 0x37253929
- (void)publish;	// 0x37253681
- (void)publish:(BOOL)publish;	// 0x3725366d
- (id)publisherMatchID;	// 0x37253d3d
// declared property getter: - (unsigned)realertCount;	// 0x372536b9
- (void)setContextValue:(id)value forKey:(id)key;	// 0x372533f1
// declared property setter: - (void)setExpirationEvents:(unsigned)events;	// 0x37253919
// declared property setter: - (void)setPrimaryAttachmentType:(int)type;	// 0x372534c1
// declared property setter: - (void)setRealertCount:(unsigned)count;	// 0x372536c9
// declared property setter: - (void)setShowsUnreadIndicator:(BOOL)indicator;	// 0x37253851
// declared property setter: - (void)setTentative:(BOOL)tentative;	// 0x372538c1
- (void)setUnlockActionLabel:(id)label;	// 0x372536a9
// declared property getter: - (BOOL)showsUnreadIndicator;	// 0x372538a5
// declared property getter: - (BOOL)tentative;	// 0x372538f1
- (void)withdraw;	// 0x37253695
@end

