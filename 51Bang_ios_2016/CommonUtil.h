//
//  AppDelegate.h
//  微信支付
//
//  Created by 宋浩文 on 15/12/22.
//  Copyright (c) 2015年 麦芽田. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CommonUtil.h"
#import "GDataXMLNode.h"

@interface CommonUtil : NSObject

+ (NSString *)md5:(NSString *)input;

+ (NSString *)sha1:(NSString *)input;

+ (NSString *)getIPAddress:(BOOL)preferIPv4;

+ (NSDictionary *)getIPAddresses;

+ (NSString *)genTimeStamp;

+ (NSString *)genNonceStr;

+ (NSString *)genTraceId;

+ (NSString *)genOutTradNo;

+ (NSString *)genSign:(NSDictionary *)signParams;

+ (NSString *)genPackage:(NSMutableDictionary*)packageParams;

+ (NSString *)sendPrepay:(NSMutableDictionary *)prePayParams andUrl:(NSString *)getPrePayIdUrl;

-(NSString *)createMD5SingForPay:(NSString *)appid_key partnerid:(NSString *)partnerid_key prepayid:(NSString *)prepayid_key package:(NSString *)package_key noncestr:(NSString *)noncestr_key timestamp:(UInt32)timestamp_key;
@end
