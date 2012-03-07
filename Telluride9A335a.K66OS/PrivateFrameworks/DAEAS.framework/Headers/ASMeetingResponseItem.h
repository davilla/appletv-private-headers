/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library

@class NSString, ASEventUID;

@interface ASMeetingResponseItem : NSObject {
	NSString *_emailItemFolderId;	// 4 = 0x4
	NSString *_emailItemServerId;	// 8 = 0x8
	int _meetingResponse;	// 12 = 0xc
	ASEventUID *_eventUID;	// 16 = 0x10
	NSString *_calEventServerId;	// 20 = 0x14
	int _status;	// 24 = 0x18
	id _context;	// 28 = 0x1c
}
@property(retain) NSString *calEventServerId;	// G=0x321876b5; S=0x321876c9; @synthesize=_calEventServerId
@property(retain) id context;	// G=0x3218770d; S=0x32187721; @synthesize=_context
@property(readonly, assign) NSString *emailItemFolderId;	// G=0x32187675; @synthesize=_emailItemFolderId
@property(readonly, assign) NSString *emailItemServerId;	// G=0x32187685; @synthesize=_emailItemServerId
@property(readonly, assign) ASEventUID *eventUID;	// G=0x321876a5; @synthesize=_eventUID
@property(readonly, assign) int meetingResponse;	// G=0x32187695; @synthesize=_meetingResponse
@property(assign) int status;	// G=0x321876ed; S=0x321876fd; @synthesize=_status
- (id)initWithEmailItemFolderId:(id)emailItemFolderId emailItemServerId:(id)anId meetingResponse:(int)response eventUID:(id)uid;	// 0x3218746d
// declared property getter: - (id)calEventServerId;	// 0x321876b5
// declared property getter: - (id)context;	// 0x3218770d
- (void)dealloc;	// 0x321875d9
- (id)description;	// 0x32187511
// declared property getter: - (id)emailItemFolderId;	// 0x32187675
// declared property getter: - (id)emailItemServerId;	// 0x32187685
// declared property getter: - (id)eventUID;	// 0x321876a5
// declared property getter: - (int)meetingResponse;	// 0x32187695
// declared property setter: - (void)setCalEventServerId:(id)anId;	// 0x321876c9
// declared property setter: - (void)setContext:(id)context;	// 0x32187721
// declared property setter: - (void)setStatus:(int)status;	// 0x321876fd
// declared property getter: - (int)status;	// 0x321876ed
@end
