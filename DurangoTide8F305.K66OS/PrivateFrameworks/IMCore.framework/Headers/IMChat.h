/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <NSObject.h> // Unknown library
#import "IMSecureObject.h"

@class NSDate, IMAccount, NSMutableArray, NSString, NSMutableDictionary, IMMessage, NSArray, IMHandle;

@interface IMChat : NSObject <IMSecureObject> {
	NSString *_guid;	// 4 = 0x4
	IMAccount *_account;	// 8 = 0x8
	NSString *_roomName;	// 12 = 0xc
	NSString *_roomNameWithoutSuffix;	// 16 = 0x10
	NSDate *_dateCreated;	// 20 = 0x14
	NSDate *_dateModified;	// 24 = 0x18
	NSMutableArray *_chatItems;	// 28 = 0x1c
	NSMutableDictionary *_unfinishedChatItemMap;	// 32 = 0x20
	NSMutableArray *_participants;	// 36 = 0x24
	NSMutableDictionary *_participantStates;	// 40 = 0x28
	IMMessage *_invitationForPendingParticipants;	// 44 = 0x2c
	NSMutableArray *_messagesPendingJoin;	// 48 = 0x30
	NSMutableDictionary *_chatProperties;	// 52 = 0x34
	NSMutableDictionary *_participantProperties;	// 56 = 0x38
	int _securityLevel;	// 60 = 0x3c
	unsigned _overallChatStatus;	// 64 = 0x40
	int _joinState;	// 68 = 0x44
	unsigned char _style;	// 72 = 0x48
	int _directConnectionStatus;	// 76 = 0x4c
	double _joinedTimeInterval;	// 80 = 0x50
	unsigned _chatItemChangeCount;	// 88 = 0x58
	BOOL _isFirstMessageInvitation;	// 92 = 0x5c
	BOOL _wasInvitationHandled;	// 93 = 0x5d
	BOOL _disabledEncryption;	// 94 = 0x5e
	BOOL _suppressEncryptionChatItems;	// 95 = 0x5f
	BOOL _didSendAFinishedMessage;	// 96 = 0x60
	BOOL _shouldAnnouncePeopleJoin;	// 97 = 0x61
}
@property(readonly, assign, nonatomic) IMAccount *account;	// G=0x300d06cd; @synthesize=_account
@property(readonly, assign, nonatomic) BOOL canBeSecure;	// G=0x300d0ad9; 
@property(readonly, assign, nonatomic) BOOL canHaveMultipleParticipants;	// G=0x300d0ed5; 
@property(readonly, assign, nonatomic) NSString *chatIdentifier;	// G=0x300d0efd; 
@property(readonly, assign, nonatomic) NSArray *chatItems;	// G=0x300d06ed; @synthesize=_chatItems
@property(readonly, assign, nonatomic) unsigned char chatStyle;	// G=0x300d06ad; @synthesize=_style
@property(readonly, assign, nonatomic) NSDate *dateCreated;	// G=0x300d068d; @synthesize=_dateCreated
@property(readonly, assign, nonatomic) NSDate *dateModified;	// G=0x300d067d; @synthesize=_dateModified
@property(readonly, assign, nonatomic) int directConnectionStatus;	// G=0x300d062d; 
@property(readonly, assign, nonatomic) NSString *guid;	// G=0x300d06dd; @synthesize=_guid
@property(readonly, assign, nonatomic) BOOL hasUnhandledInvitation;	// G=0x300d05e1; 
@property(retain, nonatomic) IMMessage *invitationForPendingParticipants;	// G=0x300d063d; S=0x300d5349; @synthesize=_invitationForPendingParticipants
@property(readonly, assign, nonatomic) int joinState;	// G=0x300d064d; @synthesize=_joinState
@property(readonly, assign, nonatomic) unsigned overallChatStatus;	// G=0x300d0e99; 
@property(readonly, assign, nonatomic) NSArray *participants;	// G=0x300d06bd; @synthesize=_participants
@property(retain, nonatomic) IMHandle *recipient;	// G=0x300d0835; S=0x300d0855; 
@property(readonly, assign, nonatomic) NSString *roomName;	// G=0x300d069d; @synthesize=_roomName
@property(readonly, assign, nonatomic) NSString *roomNameWithoutSuffix;	// G=0x300d5371; 
@property(assign, nonatomic) int securityLevel;	// G=0x300d061d; S=0x300d3fd1; 
@property(assign, nonatomic, setter=setSupressEncryptionChatItems:) BOOL suppressEncryptionChatItems;	// G=0x300d065d; S=0x300d066d; @synthesize=_suppressEncryptionChatItems
- (id)init;	// 0x300d2b41
- (void)_accountLoggedOut:(id)anOut;	// 0x300d1a65
- (void)_addParticipant:(id)participant;	// 0x300d06fd
- (void)_appendChatItem:(id)item;	// 0x300d2249
- (void)_beginChatItemChanges;	// 0x300d44f1
- (void)_buildChatItemForDecidingHandleWentOffline:(id)decidingHandleWentOffline;	// 0x300d4a81
- (void)_buildChatItemForDirectConnectionStatus:(int)directConnectionStatus;	// 0x300d4b65
- (void)_buildChatItemForDisconnectOrLogout;	// 0x300d4c65
- (void)_buildChatItemForErrorMessage:(id)errorMessage;	// 0x300d21e5
- (void)_buildChatItemForNewRecipient:(id)newRecipient isNewAccount:(BOOL)account;	// 0x300d47a5
- (void)_buildChatItemForOverallChatStatusFrom:(unsigned)from to:(unsigned)to;	// 0x300d51cd
- (void)_buildChatItemForParticipantState:(int)participantState handle:(id)handle;	// 0x300d48f1
- (void)_buildChatItemForSecurityLevelChangeFrom:(int)from to:(int)to;	// 0x300d4551
- (void)_buildInitialChatItems:(id)items;	// 0x300d35dd
- (id)_dateStampForChatItem:(id)chatItem atIndex:(unsigned)index;	// 0x300d26d5
- (void)_endChatItemChanges;	// 0x300d4489
- (void)_fixLastStatusMessageIfNecessary;	// 0x300d0f95
- (void)_handleHandleStatusChanged:(id)changed;	// 0x300d1b39
- (void)_handleIncomingMessage:(id)message;	// 0x300d1389
- (id)_initWithGUID:(id)guid account:(id)account style:(unsigned char)style directConnectionStatus:(int)status roomName:(id)name chatItems:(id)items participants:(id)participants;	// 0x300d3b25
- (void)_insertArchivedChatItems:(id)items;	// 0x300d3155
- (unsigned)_insertChatItem:(id)item atIndex:(unsigned)index;	// 0x300d2425
- (BOOL)_isDuplicate:(id)duplicate;	// 0x300d0609
- (id)_newHeaderChatItemWithDate:(id)date;	// 0x300d4db1
- (id)_newInitialTypingIndicatorChatItem;	// 0x300d27e9
- (void)_participant:(id)participant statusChanged:(int)changed;	// 0x300d11fd
- (void)_postChatItem:(id)item atIndex:(unsigned)index;	// 0x300d43a9
- (void)_postNotification:(id)notification userInfo:(id)info;	// 0x300d4079
- (void)_recomputeOverallChatStatusQuietly:(BOOL)quietly;	// 0x300d1bc9
- (void)_remapHandle:(id)handle toHandle:(id)handle2;	// 0x300d10c5
- (void)_removeChatItem:(id)item andTimestamp:(BOOL)timestamp;	// 0x300d2285
- (void)_removeInitialTypingIndicator;	// 0x300d2171
- (void)_replaceChatItem:(id)item withChatItem:(id)chatItem;	// 0x300d40e9
- (void)_setDirectConnectionStatus:(int)status;	// 0x300d1345
- (void)_setJoinState:(int)state;	// 0x300d3015
- (void)_setParticipantState:(int)state forHandle:(id)handle;	// 0x300d1929
- (BOOL)_shouldAnnouncePeopleJoin;	// 0x300d2931
- (BOOL)_shouldDisplayInitialTypingIndicator;	// 0x300d28f1
- (void)_showErrorMessage:(id)message;	// 0x300d1179
- (id)_timeStampForChatItem:(id)chatItem atIndex:(unsigned)index;	// 0x300d25a1
- (void)_unwatchHandleStatusChangedForHandle:(id)handle;	// 0x300d1a9d
- (void)_updateHeaderChatItem;	// 0x300d39f5
- (void)_updateSecurityLevelForMessage:(id)message;	// 0x300d1861
- (void)_watchHandleStatusChangedForHandle:(id)handle;	// 0x300d1ae5
- (void)acceptInvitation;	// 0x300d0e25
// declared property getter: - (id)account;	// 0x300d06cd
- (void)addPendingParticipants:(id)participants;	// 0x300d2b6d
- (id)allChatProperties;	// 0x300d060d
- (id)allPropertiesOfParticipant:(id)participant;	// 0x300d0c99
- (void)attemptDirectConnection;	// 0x300d07fd
// declared property getter: - (BOOL)canBeSecure;	// 0x300d0ad9
// declared property getter: - (BOOL)canHaveMultipleParticipants;	// 0x300d0ed5
// declared property getter: - (id)chatIdentifier;	// 0x300d0efd
// declared property getter: - (id)chatItems;	// 0x300d06ed
// declared property getter: - (unsigned char)chatStyle;	// 0x300d06ad
- (void)clear;	// 0x300d1d81
- (id)convertToChatStyle:(unsigned char)chatStyle;	// 0x300d05dd
// declared property getter: - (id)dateCreated;	// 0x300d068d
// declared property getter: - (id)dateModified;	// 0x300d067d
- (void)dealloc;	// 0x300d29ad
- (void)declineInvitation;	// 0x300d0dd5
// declared property getter: - (int)directConnectionStatus;	// 0x300d062d
// declared property getter: - (id)guid;	// 0x300d06dd
// declared property getter: - (BOOL)hasUnhandledInvitation;	// 0x300d05e1
// declared property getter: - (id)invitationForPendingParticipants;	// 0x300d063d
- (void)inviteParticipants:(id)participants reason:(id)reason;	// 0x300d2d85
- (void)join;	// 0x300d07a1
// declared property getter: - (int)joinState;	// 0x300d064d
- (void)leave;	// 0x300d0751
- (void)mark;	// 0x300d1d2d
// declared property getter: - (unsigned)overallChatStatus;	// 0x300d0e99
// declared property getter: - (id)participants;	// 0x300d06bd
- (id)participantsWithState:(unsigned)state;	// 0x300d2f09
- (void)processChatItem:(id)item;	// 0x300d05d9
// declared property getter: - (id)recipient;	// 0x300d0835
- (void)removeParticipants:(id)participants reason:(id)reason;	// 0x300d2c21
// declared property getter: - (id)roomName;	// 0x300d069d
// declared property getter: - (id)roomNameWithoutSuffix;	// 0x300d5371
// declared property getter: - (int)securityLevel;	// 0x300d061d
- (void)sendMessage:(id)message;	// 0x300d0d39
// declared property setter: - (void)setInvitationForPendingParticipants:(id)pendingParticipants;	// 0x300d5349
// declared property setter: - (void)setRecipient:(id)recipient;	// 0x300d0855
// declared property setter: - (void)setSecurityLevel:(int)level;	// 0x300d3fd1
// declared property setter: - (void)setSupressEncryptionChatItems:(BOOL)items;	// 0x300d066d
- (void)setValue:(id)value forChatProperty:(id)chatProperty;	// 0x300d0cd1
- (void)setValue:(id)value forProperty:(id)property ofParticipant:(id)participant;	// 0x300d0b41
- (BOOL)shouldAppendDatestampAfterChatItem:(id)item andBeforeChatItem:(id)item2;	// 0x300d1ef1
- (BOOL)shouldAppendTimestampAfterChatItem:(id)item andBeforeChatItem:(id)item2;	// 0x300d2031
- (BOOL)shouldInsertChatItem:(id)item atIndex:(unsigned)index;	// 0x300d05d5
- (int)stateForParticipant:(id)participant;	// 0x300d0f51
// declared property getter: - (BOOL)suppressEncryptionChatItems;	// 0x300d065d
- (id)valueForChatProperty:(id)chatProperty;	// 0x300d0d19
- (id)valueForProperty:(id)property ofParticipant:(id)participant;	// 0x300d0c71
@end

