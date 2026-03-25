/*
 * Copyright (C) 2024 Caian Benedicto <caianbene@gmail.com>
 *
 * This file is part of xinfc.
 *
 * xinfc is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * xinfc is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with xinfc.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

namespace xinfc {

struct wifi_lenghts
{
    static const unsigned int ssid_min = 2;
    static const unsigned int ssid_max = 28;
    static const unsigned int pass_min = 8;
    static const unsigned int pass_max = 63;
};

enum wifi_crypt
{
    wifi_crypt_none     = 0x01,
    wifi_crypt_wep      = 0x02,
    wifi_crypt_tkip     = 0x04,
    wifi_crypt_aes      = 0x08,
    wifi_crypt_tkip_aes = wifi_crypt_tkip | wifi_crypt_aes,
};

enum wifi_auth
{
    wifi_auth_open              = 0x01,
    wifi_auth_wpa_personal      = 0x02,
    wifi_auth_shared            = 0x04,
    wifi_auth_wpa_enterprise    = 0x08,
    wifi_auth_wpa2_enterprise   = 0x10,
    wifi_auth_wpa2_personal     = 0x20,
    wifi_auth_wpa_wpa2_personal = wifi_auth_wpa_personal | wifi_auth_wpa2_personal,
    
    // WPA3 / SAE 支持 (符合 WiFi Simple Configuration 规格)
    wifi_auth_wpa3_personal     = 0x40, // SAE
    wifi_auth_wpa3_enterprise   = 0x80, // WPA3-Ent
    
    // 混合模式支持：解决“被识别为WPA2”的问题
    wifi_auth_wpa2_wpa3_personal   = wifi_auth_wpa2_personal | wifi_auth_wpa3_personal,   // 0x60
    wifi_auth_wpa2_wpa3_enterprise = wifi_auth_wpa2_enterprise | wifi_auth_wpa3_enterprise // 0x90
};

struct wifi_str
{
    static const char* none()                
    {
        return "none";
    }

    static const char* sae()                 // WPA3 Personal (SAE)
    {
        return "sae";
    }

    static const char* sae_mixed()           // WPA2/WPA3 Personal Mixed
    {
        return "sae-mixed";
    }

    static const char* psk2_tkip_ccmp()      
    {
        return "psk2+tkip+ccmp";
    }

    static const char* psk2_tkip_aes()       
    {
        return "psk2+tkip+aes";
    }

    static const char* psk2_tkip()           
    {
        return "psk2+tkip";
    }

    static const char* psk2_ccmp()           
    {
        return "psk2+ccmp";
    }

    static const char* psk2_aes()            
    {
        return "psk2+aes";
    }

    static const char* psk2()                
    {
        return "psk2";
    }

    static const char* psk_tkip_ccmp()       
    {
        return "psk+tkip+ccmp";
    }

    static const char* psk_tkip_aes()        
    {
        return "psk+tkip+aes";
    }

    static const char* psk_tkip()            
    {
        return "psk+tkip";
    }

    static const char* psk_ccmp()            
    {
        return "psk+ccmp";
    }

    static const char* psk_aes()             
    {
        return "psk+aes";
    }

    static const char* psk()                 
    {
        return "psk";
    }

    static const char* psk_mixed_tkip_ccmp() 
    {
        return "psk-mixed+tkip+ccmp";
    }

    static const char* psk_mixed_tkip_aes()  
    {
        return "psk-mixed+tkip+aes";
    }

    static const char* psk_mixed_tkip()      
    {
        return "psk-mixed+tkip";
    }

    static const char* psk_mixed_ccmp()      
    {
        return "psk-mixed+ccmp";
    }

    static const char* psk_mixed_aes()       
    {
        return "psk-mixed+aes";
    }

    static const char* psk_mixed()           
    {
        return "psk-mixed";
    }

    static const char* wep()                 
    {
        return "wep";
    }

    static const char* wep_open()            
    {
        return "wep+open";
    }

    static const char* wep_shared()          
    {
        return "wep+shared";
    }

    static const char* wpa3()                
    {
        return "wpa3";
    }

    static const char* wpa3_mixed()          
    {
        return "wpa3-mixed";
    }

    static const char* wpa2_tkip_ccmp()      
    {
        return "wpa2+tkip+ccmp";
    }

    static const char* wpa2_tkip_aes()       
    {
        return "wpa2+tkip+aes";
    }

    static const char* wpa2_ccmp()           
    {
        return "wpa2+ccmp";
    }

    static const char* wpa2_aes()            
    {
        return "wpa2+aes";
    }

    static const char* wpa2()                
    {
        return "wpa2";
    }

    static const char* wpa2_tkip()           
    {
        return "wpa2+tkip";
    }

    static const char* wpa_tkip_ccmp()       
    {
        return "wpa+tkip+ccmp";
    }

    static const char* wpa_tkip_aes()        
    {
        return "wpa+tkip+aes";
    }

    static const char* wpa_ccmp()            
    {
        return "wpa+ccmp";
    }

    static const char* wpa_aes()             
    {
        return "wpa+aes";
    }

    static const char* wpa_tkip()            
    {
        return "wpa+tkip";
    }

    static const char* wpa()                 
    {
        return "wpa";
    }

    static const char* wpa_mixed_tkip_ccmp() 
    {
        return "wpa-mixed+tkip+ccmp";
    }

    static const char* wpa_mixed_tkip_aes()  
    {
        return "wpa-mixed+tkip+aes";
    }

    static const char* wpa_mixed_tkip()      
    {
        return "wpa-mixed+tkip";
    }

    static const char* wpa_mixed_ccmp()      
    {
        return "wpa-mixed+ccmp";
    }

    static const char* wpa_mixed_aes()       
    {
        return "wpa-mixed+aes";
    }

    static const char* wpa_mixed()           
    {
        return "wpa-mixed";
    }

    static const char* owe()                 
    {
        return "owe";
    }
};

}