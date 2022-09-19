#ifndef _BOARD_GPIO_H_
#define _BOARD_GPIO_H_

/* Generated by mx2board.py */

{% for d, v in defines %}
#define {{ d }} {{ v }}
{%- endfor %}

{% for p, v in ports %}
/* PORT {{p}} */
#define VAL_GPIO{{p}}_MODER ( \
    {%- for i in v.MODER %}
    {{ i }} | \
    {%- endfor %}
    0)

#define VAL_GPIO{{p}}_OTYPER ( \
    {%- for i in v.OTYPER %}
    {{ i }} | \
    {%- endfor %}
    0)

#define VAL_GPIO{{p}}_OSPEEDR ( \
    {%- for i in v.OSPEEDR %}
    {{ i }} | \
    {%- endfor %}
    0)

#define VAL_GPIO{{p}}_PUPDR ( \
    {%- for i in v.PUPDR %}
    {{ i }} | \
    {%- endfor %}
    0)

#define VAL_GPIO{{p}}_ODR ( \
    {%- for i in v.ODR %}
    {{ i }} | \
    {%- endfor %}
    0)

#define VAL_GPIO{{p}}_AFRL ( \
    {%- for i in v.AFRL %}
    {{ i }} | \
    {%- endfor %}
    0)

#define VAL_GPIO{{p}}_AFRH ( \
    {%- for i in v.AFRH %}
    {{ i }} | \
    {%- endfor %}
    0)
{% if ascr_lockr %}
#define VAL_GPIO{{p}}_ASCR ( \
    {%- for i in v.ASCR %}
    {{ i }} | \
    {%- endfor %}
    0)

#define VAL_GPIO{{p}}_LOCKR ( \
    {%- for i in v.LOCKR %}
    {{ i }} | \
    {%- endfor %}
    0)
{% endif %}
{% endfor %}

#endif
