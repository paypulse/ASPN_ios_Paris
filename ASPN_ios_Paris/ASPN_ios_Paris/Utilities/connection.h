//
//  connection.h
//  ASPN_ios_Paris
//
//  Created by SMJ_DEV on 03/06/2019.
//  Copyright © 2019 smj. All rights reserved.
//

#ifndef connection_h
#define connection_h




//서버 연결 정보 
#ifdef DEBUG

//테스트 서버
#define serverDomain      @"https://pms.paris.co.kr:8815"

#else
//실 서버

#define serverDomain    @"https://pms.paris.co.kr:8815"

#endif





#endif /* connection_h */
