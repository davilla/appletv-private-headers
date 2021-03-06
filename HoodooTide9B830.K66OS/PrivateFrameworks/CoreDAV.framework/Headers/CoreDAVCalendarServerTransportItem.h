/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVLeafItem, CoreDAVItemWithHrefChildItem;

@interface CoreDAVCalendarServerTransportItem : CoreDAVItem {
	CoreDAVLeafItem *_apsBundleID;	// 24 = 0x18
	CoreDAVLeafItem *_courierServer;	// 28 = 0x1c
	CoreDAVItemWithHrefChildItem *_subscriptionURL;	// 32 = 0x20
	CoreDAVItemWithHrefChildItem *_tokenURL;	// 36 = 0x24
	CoreDAVLeafItem *_apsEnv;	// 40 = 0x28
	CoreDAVLeafItem *_refreshInterval;	// 44 = 0x2c
	CoreDAVLeafItem *_xmppServer;	// 48 = 0x30
	CoreDAVLeafItem *_xmppURI;	// 52 = 0x34
}
@property(retain) CoreDAVLeafItem *apsBundleID;	// G=0x35dda891; S=0x35dda8a5; @synthesize=_apsBundleID
@property(retain) CoreDAVLeafItem *apsEnv;	// G=0x35dda971; S=0x35dda985; @synthesize=_apsEnv
@property(retain) CoreDAVLeafItem *courierServer;	// G=0x35dda8c9; S=0x35dda8dd; @synthesize=_courierServer
@property(retain) CoreDAVLeafItem *refreshInterval;	// G=0x35dda9a9; S=0x35dda9bd; @synthesize=_refreshInterval
@property(retain) CoreDAVItemWithHrefChildItem *subscriptionURL;	// G=0x35dda901; S=0x35dda915; @synthesize=_subscriptionURL
@property(retain) CoreDAVItemWithHrefChildItem *tokenURL;	// G=0x35dda939; S=0x35dda94d; @synthesize=_tokenURL
@property(retain) CoreDAVLeafItem *xmppServer;	// G=0x35dda9e1; S=0x35dda9f5; @synthesize=_xmppServer
@property(retain) CoreDAVLeafItem *xmppURI;	// G=0x35ddaa19; S=0x35ddaa2d; @synthesize=_xmppURI
- (id)init;	// 0x35dd9f09
// declared property getter: - (id)apsBundleID;	// 0x35dda891
// declared property getter: - (id)apsEnv;	// 0x35dda971
- (id)copyParseRules;	// 0x35dda245
// declared property getter: - (id)courierServer;	// 0x35dda8c9
- (void)dealloc;	// 0x35dd9f35
- (id)description;	// 0x35dda00d
// declared property getter: - (id)refreshInterval;	// 0x35dda9a9
// declared property setter: - (void)setApsBundleID:(id)anId;	// 0x35dda8a5
// declared property setter: - (void)setApsEnv:(id)env;	// 0x35dda985
// declared property setter: - (void)setCourierServer:(id)server;	// 0x35dda8dd
// declared property setter: - (void)setRefreshInterval:(id)interval;	// 0x35dda9bd
// declared property setter: - (void)setSubscriptionURL:(id)url;	// 0x35dda915
// declared property setter: - (void)setTokenURL:(id)url;	// 0x35dda94d
// declared property setter: - (void)setXmppServer:(id)server;	// 0x35dda9f5
// declared property setter: - (void)setXmppURI:(id)uri;	// 0x35ddaa2d
// declared property getter: - (id)subscriptionURL;	// 0x35dda901
// declared property getter: - (id)tokenURL;	// 0x35dda939
// declared property getter: - (id)xmppServer;	// 0x35dda9e1
// declared property getter: - (id)xmppURI;	// 0x35ddaa19
@end

