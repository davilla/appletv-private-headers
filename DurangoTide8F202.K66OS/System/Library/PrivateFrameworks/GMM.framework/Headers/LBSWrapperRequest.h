/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBRequest.h> // Unknown library

@class LBSGLocRequest;

@interface LBSWrapperRequest : PBRequest {
@private
	int _requestType;	// 4 = 0x4
	BOOL _hasRequestType;	// 8 = 0x8
	LBSGLocRequest *_request;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL hasRequest;	// G=0x30a8a1c5; 
@property(readonly, assign, nonatomic) BOOL hasRequestType;	// G=0x30a8a1ed; @synthesize=_hasRequestType
@property(retain, nonatomic) LBSGLocRequest *request;	// G=0x30a8a1dd; S=0x30a8a5f1; @synthesize=_request
@property(assign, nonatomic) int requestType;	// G=0x30a8a1fd; S=0x30a8a1a9; @synthesize=_requestType
- (id)init;	// 0x30a8a20d
- (void)dealloc;	// 0x30a8a595
- (id)description;	// 0x30a8a239
// declared property getter: - (BOOL)hasRequest;	// 0x30a8a1c5
// declared property getter: - (BOOL)hasRequestType;	// 0x30a8a1ed
- (BOOL)readFrom:(id)from;	// 0x30a8a3e9
// declared property getter: - (id)request;	// 0x30a8a1dd
// declared property getter: - (int)requestType;	// 0x30a8a1fd
- (unsigned)requestTypeCode;	// 0x30a8a1d9
- (Class)responseClass;	// 0x30a8a5dd
// declared property setter: - (void)setRequest:(id)request;	// 0x30a8a5f1
// declared property setter: - (void)setRequestType:(int)type;	// 0x30a8a1a9
- (void)writeTo:(id)to;	// 0x30a8a31d
@end

